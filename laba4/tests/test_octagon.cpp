TEST(OctagonTest, AreaTest) {
    std::vector<Point<double>> vertices = {
        {0, 1}, {1, 0}, {2, 0}, {3, 1}, {3, 2}, {2, 3}, {1, 3}, {0, 2}
    };
    Octagon<double> octagon(vertices);
    
    double expected_area = 8.0;
    EXPECT_NEAR(octagon.area(), expected_area, 1e-6);
}

TEST(OctagonTest, CenterTest) {
    std::vector<Point<double>> vertices = {
        {0, 1}, {1, 0}, {2, 0}, {3, 1}, {3, 2}, {2, 3}, {1, 3}, {0, 2}
    };
    Octagon<double> octagon(vertices);
    
    Point<double> center = octagon.center();
    EXPECT_NEAR(center.x, 1.5, 1e-6);
    EXPECT_NEAR(center.y, 1.5, 1e-6);
}
