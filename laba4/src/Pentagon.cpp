#include "Pentagon.h"

template <typename T>
T Pentagon<T>::area() const {
    T result = 0;
    int n = points.size();
    for (int i = 0; i < n; ++i) {
        result += points[i]->x * points[(i + 1) % n]->y - points[(i + 1) % n]->x * points[i]->y;
    }
    return std::abs(result) / 2.0;
}

template <typename T>
Point<T> Pentagon<T>::center() const {
    T x = 0, y = 0;
    for (const auto& point : points) {
        x += point->x;
        y += point->y;
    }
    return Point<T>(x / points.size(), y / points.size());
}

template class Pentagon<double>;
template class Pentagon<float>;
