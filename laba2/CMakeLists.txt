cmake_minimum_required(VERSION 3.10)
project(HexLibrary)

set(CMAKE_CXX_STANDARD 17)

add_library(Hex STATIC Hex.cpp)

enable_testing()

add_subdirectory(tests)

add_executable(HexTests test_Hex.cpp)
target_link_libraries(HexTests Hex gtest gtest_main)

add_test(NAME HexTests COMMAND HexTests)
