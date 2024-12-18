cmake_minimum_required(VERSION 3.10)
project(DungeonEditor)

set(CMAKE_C_STANDARD 99)

include_directories(include)

add_executable(DungeonEditor
    src/main.c
    src/NPCFactory.c
    src/Visitor.c
    src/Observer.c
    src/NPC.c
    src/FileHandler.c
)

target_link_libraries(DungeonEditor m)
