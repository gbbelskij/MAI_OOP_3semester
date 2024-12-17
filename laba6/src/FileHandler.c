#include "FileHandler.h"
#include "NPC.h"
#include <stdio.h>

void save_to_file(NPC* npc_list[], int count, const char* filename) {
    FILE *file = fopen(filename, "w");
    // Логика записи NPC в файл
    fclose(file);
}

void load_from_file(NPC* npc_list[], int* count, const char* filename) {
    FILE *file = fopen(filename, "r");
    // Логика загрузки NPC из файла
    fclose(file);
}
