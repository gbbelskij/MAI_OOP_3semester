#include <gtest/gtest.h>
#include "Stack.hpp"
#include "FixedBlockMemoryResource.hpp"

TEST(StackTest, PushPopTest) {
    FixedBlockMemoryResource mr(1024);
    Stack<int> stack(&mr);

    stack.push(10);
    stack.push(20);

    EXPECT_EQ(stack.top(), 20);
    stack.pop();
    EXPECT_EQ(stack.top(), 10);
}

TEST(StackTest, ComplexDataTest) {
    FixedBlockMemoryResource mr(1024);
    Stack<std::pair<int, double>> stack(&mr);

    stack.push({1, 1.1});
    stack.push({2, 2.2});

    EXPECT_EQ(stack.top().first, 2);
    EXPECT_EQ(stack.top().second, 2.2);
    stack.pop();
    EXPECT_EQ(stack.top().first, 1);
    EXPECT_EQ(stack.top().second, 1.1);
}
