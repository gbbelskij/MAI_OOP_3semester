#pragma once
#include <memory>
#include <vector>
#include "Point.h"

template <typename T>
class Figure {
public:
    virtual T area() const = 0;
    virtual Point<T> center() const = 0;
    virtual std::vector<std::unique_ptr<Point<T>>> vertices() const = 0;
    virtual ~Figure() = default;
};
