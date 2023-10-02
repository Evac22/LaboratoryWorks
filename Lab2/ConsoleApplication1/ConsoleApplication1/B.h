#pragma once
#include "A.h"
// �������� ���� B �� A
class B : public A {
public:
    B(int valueA, int valueB) : A(valueA), valueB(valueB) {}

    // �������������� ��������� ������� display
    void display() const override {
        std::cout << "Class B, valueA: " << valueA << ", valueB: " << valueB << std::endl;
    }

    // ������� ��� ���������� ����������� ��������
    int add() const {
        return valueA + valueB;
    }

private:
    int valueB;
};
