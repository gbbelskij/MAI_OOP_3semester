#pragma once
#include <memory>
#include <iostream>

template <typename T>
class Array {
private:
    std::shared_ptr<T[]> data;
    size_t capacity;
    size_t size;

public:
    Array(size_t cap = 10) : capacity(cap), size(0) {
        data = std::shared_ptr<T[]>(new T[capacity]);
    }

    void push_back(const T& value) {
        if (size >= capacity) {
            resize(capacity * 2);
        }
        data[size++] = value;
    }

    void resize(size_t new_capacity) {
        std::shared_ptr<T[]> new_data(new T[new_capacity]);
        for (size_t i = 0; i < size; ++i) {
            new_data[i] = std::move(data[i]);
        }
        capacity = new_capacity;
        data = std::move(new_data);
    }

    T& operator[](size_t index) {
        return data[index];
    }

    size_t getSize() const {
        return size;
    }

    void remove(size_t index) {
        if (index < size) {
            for (size_t i = index; i < size - 1; ++i) {
                data[i] = std::move(data[i + 1]);
            }
            --size;
        }
    }

    void print() const {
        for (size_t i = 0; i < size; ++i) {
            std::cout << *data[i] << std::endl;
        }
    }
};
