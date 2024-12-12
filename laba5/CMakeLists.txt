cmake_minimum_required(VERSION 3.10)
project(MemoryResourceStack)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")

add_executable(MemoryResourceStack src/main.cpp src/Stack.hpp src/FixedBlockMemoryResource.hpp src/StackIterator.hpp)

enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(StackTest tests/StackTest.cpp)
target_link_libraries(StackTest ${GTEST_LIBRARIES} pthread)
