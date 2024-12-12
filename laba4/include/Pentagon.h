#pragma once
#include "Figure.h"

template <typename T>
class Pentagon : public Figure<T> {
private:
    std::unique_ptr<Point<T>> centerPoint;
    std::vector<std::unique_ptr<Point<T>>> points;

public:
    Pentagon(const std::vector<Point<T>>& vertices) {
        for (const auto& v : vertices) {
            points.push_back(std::make_unique<Point<T>>(v));
        }
    }

    T area() const override {
        // Реализация вычисления площади пятиугольника
        return 0.0;
    }

    Point<T> center() const override {
        // Реализация вычисления геометрического центра
        return Point<T>(0, 0);
    }

    std::vector<std::unique_ptr<Point<T>>> vertices() const override {
        return points;
    }
};
