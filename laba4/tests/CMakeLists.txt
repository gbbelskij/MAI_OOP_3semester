cmake_minimum_required(VERSION 3.10)
project(FiguresTests)

enable_testing()

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(HexagonTest HexagonTest.cpp)
target_link_libraries(HexagonTest ${GTEST_LIBRARIES} pthread)

add_executable(OctagonTest OctagonTest.cpp)
target_link_libraries(OctagonTest ${GTEST_LIBRARIES} pthread)

add_test(NAME HexagonTest COMMAND HexagonTest)
add_test(NAME OctagonTest COMMAND OctagonTest)