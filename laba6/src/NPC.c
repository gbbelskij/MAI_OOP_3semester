#include "NPC.h"
#include <stdio.h>

NPC* create_knight(const char* name, int x, int y) {
    NPC* knight = malloc(sizeof(NPC));
    knight->type = KNIGHT;
    knight->x = x;
    knight->y = y;
    knight->name = name;
    knight->fight = knight_fight;
    return knight;
}

void knight_fight(NPC* target) {
    if (target->type == SQUIRREL) {
        printf("%s убил %s\n", knight->name, target->name);
        // Логика удаления белки
    }
}

// Аналогично для других NPC
