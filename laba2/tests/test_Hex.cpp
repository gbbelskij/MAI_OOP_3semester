#include "Hex.h"
#include <gtest/gtest.h>

TEST(HexTest, Addition) {
    Hex h1("A1");
    Hex h2("1F");
    Hex result = h1 + h2;
    EXPECT_EQ(result, Hex("C0"));
}

TEST(HexTest, Comparison) {
    Hex h1("A1");
    Hex h2("1F");
    EXPECT_TRUE(h1 > h2);
    EXPECT_FALSE(h2 > h1);
}
