// Hex.cpp (реализация класса)
#include "Hex.h"
#include <stdexcept>
#include <algorithm>
#include <iomanip>

Hex::Hex() : digits_() {}

Hex::Hex(const std::string& hexStr) {
    fromString(hexStr);
}

Hex::Hex(const std::initializer_list<unsigned char>& hexDigits) : digits_(hexDigits) {}

Hex::Hex(const Hex& other) : digits_(other.digits_) {}

Hex::Hex(Hex&& other) noexcept : digits_(std::move(other.digits_)) {}

Hex::~Hex() noexcept {}

void Hex::fromString(const std::string& hexStr) {
    digits_.clear();
    for (auto it = hexStr.rbegin(); it != hexStr.rend(); ++it) {
        if (*it >= '0' && *it <= '9') {
            digits_.push_back(*it - '0');
        } else if (*it >= 'A' && *it <= 'F') {
            digits_.push_back(*it - 'A' + 10);
        } else {
            throw std::invalid_argument("Invalid hex character");
        }
    }
}

Hex Hex::operator+(const Hex& other) const {
    Hex result;
    size_t maxSize = std::max(digits_.size(), other.digits_.size());
    result.digits_.resize(maxSize, 0);

    unsigned char carry = 0;
    for (size_t i = 0; i < maxSize; ++i) {
        unsigned char sum = carry;
        if (i < digits_.size()) sum += digits_[i];
        if (i < other.digits_.size()) sum += other.digits_[i];
        result.digits_[i] = sum % 16;
        carry = sum / 16;
    }
    if (carry) {
        result.digits_.push_back(carry);
    }
    return result;
}

Hex& Hex::operator+=(const Hex& other) {
    *this = *this + other;
    return *this;
}


bool Hex::operator==(const Hex& other) const {
    return digits_ == other.digits_;
}

bool Hex::operator!=(const Hex& other) const {
    return !(*this == other);
}

bool Hex::operator<(const Hex& other) const {
    return digits_.size() < other.digits_.size() || std::lexicographical_compare(digits_.rbegin(), digits_.rend(), other.digits_.rbegin(), other.digits_.rend());
}

bool Hex::operator>(const Hex& other) const {
    return other < *this;
}

std::ostream& operator<<(std::ostream& os, const Hex& hex) {
    for (auto it = hex.digits_.rbegin(); it != hex.digits_.rend(); ++it) {
        os << std::hex << std::uppercase << static_cast<int>(*it);
    }
    return os;
}
