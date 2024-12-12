#pragma once
#include <vector>
#include <string>
#include <iostream>

class Hex {
public:
    Hex();
    Hex(const std::string& hexStr);
    Hex(const std::initializer_list<unsigned char>& hexDigits);
    Hex(const Hex& other);
    Hex(Hex&& other) noexcept;
    ~Hex() noexcept;

    Hex operator+(const Hex& other) const;
    Hex& operator+=(const Hex& other);
    Hex operator-(const Hex& other) const;
    Hex& operator-=(const Hex& other);

    bool operator==(const Hex& other) const;
    bool operator!=(const Hex& other) const;
    bool operator<(const Hex& other) const;
    bool operator>(const Hex& other) const;

    friend std::ostream& operator<<(std::ostream& os, const Hex& hex);

private:
    std::vector<unsigned char> digits_;

    void fromString(const std::string& hexStr);
};
