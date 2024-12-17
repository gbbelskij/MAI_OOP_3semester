#ifndef NPC_H
#define NPC_H

#include <stdlib.h>

// Базовая структура NPC
typedef struct NPC {
    char* name;
    int x, y;
    void (*fight)(struct NPC* target); // Указатель на функцию боя
    int type;  // Тип NPC (KNIGHT, SQUIRREL, PEGASUS)
} NPC;

// Функции создания различных NPC
NPC* create_knight(const char* name, int x, int y);
NPC* create_squirrel(const char* name, int x, int y);
NPC* create_pegasus(const char* name, int x, int y);

// Функции для каждого NPC
void knight_fight(NPC* target);
void squirrel_fight(NPC* target);
void pegasus_fight(NPC* target);

// Вспом
