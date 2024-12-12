#include <gtest/gtest.h>
#include "Pentagon.h"

TEST(PentagonTest, AreaTest) {
    std::vector<Point<double>> vertices = {
        {0, 0}, {1, 0}, {1.5, 1}, {0.5, 2}, {-0.5, 1}
    };
    Pentagon<double> pentagon(vertices);
    EXPECT_NEAR(pentagon.area(), 2.377, 1e-6);
}

TEST(PentagonTest, CenterTest) {
    std::vector<Point<double>> vertices = {
        {0, 0}, {1, 0}, {1.5, 1}, {0.5, 2}, {-0.5, 1}
    };
    Pentagon<double> pentagon(vertices);
    Point<double> center = pentagon.center();
    EXPECT_NEAR(center.x, 0.5, 1e-6);
    EXPECT_NEAR(center.y, 0.5, 1e-6);
}
