#include "game.h"
#include <iostream>
#include <random>
#include <chrono>
#include <thread>

Game::Game() {
    init_npcs(); // Инициализация NPC
}

// Инициализация 50 NPC на случайных позициях
void Game::init_npcs() {
    npcs.emplace_back("Белка", "Белка", rand() % width, rand() % height, 5, 5);
    npcs.emplace_back("Рыцарь", "Странствующий рыцарь", rand() % width, rand() % height, 30, 10);
    npcs.emplace_back("Пегас", "Пегас", rand() % width, rand() % height, 30, 10);
    // Добавьте остальных NPC аналогично...
}

void Game::start() {
    std::thread move_thread(&Game::move_npcs, this);
    std::thread fight_thread(&Game::run_fights, this);
    std::thread print_thread(&Game::print_map, this);

    std::this_thread::sleep_for(std::chrono::seconds(30)); // Игра длится 30 секунд
    {
        std::lock_guard<std::mutex> lock(game_mutex);
        game_over = true;
    }
    cv.notify_all();

    move_thread.join();
    fight_thread.join();
    print_thread.join();
}

// Перемещение NPC
void Game::move_npcs() {
    while (!game_over) {
        for (auto& npc : npcs) {
            npc.move();
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

// Поток боя
void Game::run_fights() {
    while (!game_over) {
        std::unique_lock<std::mutex> lock(game_mutex);
        cv.wait(lock, [this]() { return game_over; });

        for (auto& npc : npcs) {
            for (auto& opponent : npcs) {
                if (&npc != &opponent && npc.is_alive() && opponent.is_alive()) {
                    npc.fight(opponent);
                }
            }
        }
    }
}

// Поток вывода карты
void Game::print_map() {
    while (!game_over) {
        std::lock_guard<std::mutex> lock(game_mutex);
        std::cout << "Карта NPC: " << std::endl;
        for (const auto& npc : npcs) {
            if (npc.is_alive()) {
                std::cout << npc.get_name() << " находится на (" << npc.get_position().first 
                    << ", " << npc.get_position().second << ")" << std::endl;
            }
        }
        std::cout << "------------------------" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1)); // Обновляем карту каждую секунду
    }
}
        
