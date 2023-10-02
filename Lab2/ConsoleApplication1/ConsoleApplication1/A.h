#pragma once
#include <iostream>

// Базовий клас A

class A {
public:
    A(int valueA) : valueA(valueA) {}

    // Віртуальна функція, яку будемо перевизначати в похідних класах
    virtual void display() const {
        std::cout << "Class A, valueA: " << valueA << std::endl;
    }

protected:
    int valueA;
};
