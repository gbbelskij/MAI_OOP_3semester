#include <memory_resource>
#include <vector>

template <typename T>
class Stack {
private:
    std::pmr::vector<T> data;

public:
    Stack(std::pmr::memory_resource* mr) : data(mr) {}

    void push(const T& value) {
        data.push_back(value);
    }

    void pop() {
        if (!data.empty()) {
            data.pop_back();
        }
    }

    T& top() {
        return data.back();
    }

    bool empty() const {
        return data.empty();
    }

    size_t size() const {
        return data.size();
    }
};
