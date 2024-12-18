#ifndef NPC_H
#define NPC_H

#include <string>
#include <mutex>

class NPC {
private:
    std::string name;
    std::string type;
    int x, y; // Координаты NPC
    bool alive;
    int move_distance;
    int attack_range;
    std::mutex npc_mutex;

public:
    NPC(const std::string& name, const std::string& type, int x, int y, int move_distance, int attack_range);
    void move(); // Функция для перемещения NPC
    bool is_alive() const;
    std::pair<int, int> get_position() const;
    int get_attack_range() const;
    std::string get_name() const;
    std::string get_type() const;

    void fight(NPC& opponent); // Бой между NPC
    void die(); // Убить NPC
};

#endif // NPC_H
