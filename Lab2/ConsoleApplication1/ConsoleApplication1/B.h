#pragma once
#include "A.h"
// Похідний клас B від A
class B : public A {
public:
    B(int valueA, int valueB) : A(valueA), valueB(valueB) {}

    // Перевизначення віртуальної функції display
    void display() const override {
        std::cout << "Class B, valueA: " << valueA << ", valueB: " << valueB << std::endl;
    }

    // Функція для проведення математичної операції
    int add() const {
        return valueA + valueB;
    }

private:
    int valueB;
};
