cmake_minimum_required(VERSION 3.10)
project(Figures)

set(CMAKE_CXX_STANDARD 20)

# Включаем директории с заголовочными файлами
include_directories(include)

# Добавляем исполняемый файл
add_executable(Figures main.cpp src/Pentagon.cpp src/Hexagon.cpp src/Octagon.cpp)

# Добавляем Google Test
enable_testing()
add_subdirectory(tests)
