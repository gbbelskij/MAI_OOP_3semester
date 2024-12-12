#include <iostream>
#include "Array.h"
#include "Pentagon.h"
#include "Hexagon.h"
#include "Octagon.h"

int main() {
    Array<std::shared_ptr<Figure<double>>> figures;

    // Пример добавления пятиугольника
    std::vector<Point<double>> pentagonVertices = {
        {0, 0}, {1, 0}, {1.5, 1}, {0.5, 2}, {-0.5, 1}
    };
    figures.push_back(std::make_shared<Pentagon<double>>(pentagonVertices));

    // Пример добавления шестиугольника
    std::vector<Point<double>> hexagonVertices = {
        {0, 0}, {1, 0}, {1.5, 1}, {0.5, 2}, {-0.5, 1}, {-1, 0}
    };
    figures.push_back(std::make_shared<Hexagon<double>>(hexagonVertices));

    // Пример добавления восьмиугольника
    std::vector<Point<double>> octagonVertices = {
        {0, 0}, {1, 0}, {1.5, 1}, {0.5, 2}, {-0.5, 1}, {-1, 0}, {-1.5, 1}, {-0.5, 2}
    };
    figures.push_back(std::make_shared<Octagon<double>>(octagonVertices));

    // Вывод информации о фигурах
    for (size_t i = 0; i < figures.getSize(); ++i) {
        std::cout << "Figure " << i + 1 << ":\n";
        std::cout << "Area: " << figures[i]->area() << "\n";
        std::cout << "Center: " << figures[i]->center() << "\n";
    }

    return 0;
}
