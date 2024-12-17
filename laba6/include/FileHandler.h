#ifndef FILE_HANDLER_H
#define FILE_HANDLER_H

#include "NPC.h"

// Функции для сохранения списка NPC в файл
void save_to_file(NPC* npc_list[], int count, const char* filename);

// Функции для загрузки NPC из файла
void load_from_file(NPC* npc_list[], int* count
