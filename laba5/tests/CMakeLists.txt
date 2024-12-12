cmake_minimum_required(VERSION 3.10)
project(StackTests)

enable_testing()

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(StackTest tests/StackTest.cpp)
target_link_libraries(StackTest ${GTEST_LIBRARIES} pthread)

add_test(NAME StackTest COMMAND StackTest)
