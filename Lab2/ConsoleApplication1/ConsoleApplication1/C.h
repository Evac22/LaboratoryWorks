#pragma once
#include "A.h"
// Похідний клас C від A
class C : public A {
public:
    C(int valueA, int valueC) : A(valueA), valueC(valueC) {}

    // Перевизначення віртуальної функції display
    void display() const override {
        std::cout << "Class C, valueA: " << valueA << ", valueC: " << valueC << std::endl;
    }

    // Функція для проведення математичної операції
    int subtract() const {
        return valueA - valueC;
    }

private:
    int valueC;
};