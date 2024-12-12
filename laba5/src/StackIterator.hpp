#include <iterator>

template <typename T>
class StackIterator {
private:
    typename std::pmr::vector<T>::iterator current;

public:
    StackIterator(typename std::pmr::vector<T>::iterator it) : current(it) {}

    T& operator*() {
        return *current;
    }

    StackIterator& operator++() {
        ++current;
        return *this;
    }

    bool operator!=(const StackIterator& other) const {
        return current != other.current;
    }

    using iterator_category = std::forward_iterator_tag;
};
