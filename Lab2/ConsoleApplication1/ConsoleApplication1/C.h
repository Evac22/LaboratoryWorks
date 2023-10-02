#pragma once
#include "A.h"
// �������� ���� C �� A
class C : public A {
public:
    C(int valueA, int valueC) : A(valueA), valueC(valueC) {}

    // �������������� ��������� ������� display
    void display() const override {
        std::cout << "Class C, valueA: " << valueA << ", valueC: " << valueC << std::endl;
    }

    // ������� ��� ���������� ����������� ��������
    int subtract() const {
        return valueA - valueC;
    }

private:
    int valueC;
};