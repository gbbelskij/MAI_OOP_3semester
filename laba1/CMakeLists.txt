cmake_minimum_required(VERSION 3.10)
project(laba1)

set(CMAKE_CXX_STANDARD 14)

add_executable(laba1 src/main.cpp)

include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.zip
)

# Собираем Google Test
FetchContent_MakeAvailable(googletest)

enable_testing()

# Добавляем исполняемый файл для тестов
add_executable(IsAfraidTest tests/IsAfraidTest.cpp src/main.cpp)

# Линкуем Google Test с нашим тестом
target_link_libraries(IsAfraidTest gtest gtest_main)

# Добавляем тесты в CTest
add_test(NAME IsAfraidTest COMMAND IsAfraidTest)