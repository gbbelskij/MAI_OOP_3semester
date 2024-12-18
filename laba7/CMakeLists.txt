cmake_minimum_required(VERSION 3.10)

project(NPCGame)

set(CMAKE_CXX_STANDARD 17)

add_executable(NPCGame
    src/main.cpp
    src/npc.cpp
    src/game.cpp
    include/npc.h
    include/game.h
)

