#include "npc.h"
#include <iostream>
#include <random>

// Конструктор
NPC::NPC(const std::string& name, const std::string& type, int x, int y, int move_distance, int attack_range)
    : name(name), type(type), x(x), y(y), alive(true), move_distance(move_distance), attack_range(attack_range) {}

// Перемещение NPC
void NPC::move() {
    std::lock_guard<std::mutex> lock(npc_mutex);
    if (alive) {
        x += (rand() % (2 * move_distance)) - move_distance; // Случайное движение
        y += (rand() % (2 * move_distance)) - move_distance;
    }
}

// Бой между NPC
void NPC::fight(NPC& opponent) {
    std::lock_guard<std::mutex> lock(npc_mutex);
    if (!opponent.is_alive()) return;
    
    int attack = rand() % 6 + 1; // Кидаем кубик для атаки
    int defense = rand() % 6 + 1; // Кидаем кубик для защиты
    
    std::cout << name << " атакует " << opponent.get_name() << "!" << std::endl;
    
    if (attack > defense) {
        std::cout << name << " убил " << opponent.get_name() << "!" << std::endl;
        opponent.die();
    }
}

void NPC::die() {
    alive = false;
}
