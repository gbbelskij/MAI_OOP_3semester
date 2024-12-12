TEST(HexagonTest, AreaTest) {
    std::vector<Point<double>> vertices = {
        {0, 0}, {1, 0}, {1.5, sqrt(3)}, {1, 2*sqrt(3)}, {0, 2*sqrt(3)}, {-0.5, sqrt(3)}
    };
    Hexagon<double> hexagon(vertices);
    
    double expected_area = 7.794;
    EXPECT_NEAR(hexagon.area(), expected_area, 1e-6);
}

TEST(HexagonTest, CenterTest) {
    std::vector<Point<double>> vertices = {
        {0, 0}, {1, 0}, {1.5, sqrt(3)}, {1, 2*sqrt(3)}, {0, 2*sqrt(3)}, {-0.5, sqrt(3)}
    };
    Hexagon<double> hexagon(vertices);
    
    Point<double> center = hexagon.center();
    EXPECT_NEAR(center.x, 0.5, 1e-6);
    EXPECT_NEAR(center.y, sqrt(3), 1e-6);
}
