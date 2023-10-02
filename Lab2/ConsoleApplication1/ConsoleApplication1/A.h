#pragma once
#include <iostream>

// ������� ���� A

class A {
public:
    A(int valueA) : valueA(valueA) {}

    // ³�������� �������, ��� ������ ������������� � �������� ������
    virtual void display() const {
        std::cout << "Class A, valueA: " << valueA << std::endl;
    }

protected:
    int valueA;
};
