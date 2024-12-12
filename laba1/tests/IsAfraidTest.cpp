#include <gtest/gtest.h>
#include "../src/main.cpp"

// Тест для понедельника
TEST(IsAfraid, MondayTest) {
    EXPECT_TRUE(check_fear("Понедельник", 12));
    EXPECT_FALSE(check_fear("Понедельник", 13));
}

// Тест для вторника
TEST(IsAfraid, TuesdayTest) {
    EXPECT_TRUE(check_fear("Вторник", 100));
    EXPECT_FALSE(check_fear("Вторник", 50));
}

// Тест для среды
TEST(IsAfraid, WednesdayTest) {
    EXPECT_TRUE(check_fear("Среда", 34));
    EXPECT_FALSE(check_fear("Среда", 35));
}

// Тест для четверга
TEST(IsAfraid, ThursdayTest) {
    EXPECT_TRUE(check_fear("Четверг", 0));
    EXPECT_FALSE(check_fear("Четверг", 1));
}

// Тест для пятницы
TEST(IsAfraid, FridayTest) {
    EXPECT_TRUE(check_fear("Пятница", 2));
    EXPECT_FALSE(check_fear("Пятница", 3));
}

// Тест для субботы
TEST(IsAfraid, SaturdayTest) {
    EXPECT_TRUE(check_fear("Суббота", 56));
    EXPECT_FALSE(check_fear("Суббота", 55));
}

// Тест для воскресенья
TEST(IsAfraid, SundayTest) {
    EXPECT_TRUE(check_fear("Воскресенье", 666));
    EXPECT_TRUE(check_fear("Воскресенье", -666));
    EXPECT_FALSE(check_fear("Воскресенье", 665));
}

