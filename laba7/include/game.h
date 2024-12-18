#ifndef GAME_H
#define GAME_H

#include <vector>
#include <thread>
#include <mutex>
#include <condition_variable>
#include "npc.h"

class Game {
private:
    std::vector<NPC> npcs; // Все NPC на карте
    std::mutex game_mutex;
    std::condition_variable cv;
    bool game_over = false;
    int width = 100, height = 100; // Размер карты

public:
    Game();
    void init_npcs(); // Инициализация 50 NPC
    void start(); // Запуск игры
    void move_npcs(); // Поток для перемещения NPC
    void run_fights(); // Поток для боёв
    void print_map(); // Поток для вывода карты
    bool check_proximity(NPC& npc1, NPC& npc2); // Проверка расстояния между NPC
};

#endif // GAME_H
