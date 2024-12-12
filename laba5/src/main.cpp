#include <iostream>
#include <memory_resource>
#include "Stack.hpp"
#include "FixedBlockMemoryResource.hpp"

struct ComplexData {
    int x;
    double y;
    ComplexData(int a, double b) : x(a), y(b) {}
};

int main() {
    FixedBlockMemoryResource mr(1024);

    Stack<int> int_stack(&mr);
    int_stack.push(42);
    int_stack.push(84);
    std::cout << "Top of int stack: " << int_stack.top() << std::endl;
    int_stack.pop();
    std::cout << "Top of int stack after pop: " << int_stack.top() << std::endl;

    Stack<ComplexData> complex_stack(&mr);
    complex_stack.push(ComplexData(1, 1.1));
    complex_stack.push(ComplexData(2, 2.2));

    std::cout << "Top of complex stack: " << complex_stack.top().x << ", " << complex_stack.top().y << std::endl;

    return 0;
}
