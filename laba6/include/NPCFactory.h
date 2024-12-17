#ifndef NPC_FACTORY_H
#define NPC_FACTORY_H

#include "NPC.h"

// Перечисление типов NPC
typedef enum {
    KNIGHT,
    SQUIRREL,
    PEGASUS
} NPCType;

// Функция фабрики для создания NPC
NPC* create_NPC(NPCType type, const char* name
