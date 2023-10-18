#include "VectorOperations.h"
#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    VectorOperations vectorOps;

    vectorOps.PrintVector();

    vectorOps.SortVector();
    std::cout << "���������� VECTOR:" << std::endl;
    vectorOps.PrintVector();

    vectorOps.PrintSizeOnEachStep();

    vectorOps.InsertElement(3, 2);
    std::cout << "��������� 3 �� ������� 2:" << std::endl;
    vectorOps.PrintVector();

    vectorOps.EraseElement(4);
    std::cout << "��������� �������� � ������� 4:" << std::endl;
    vectorOps.PrintVector();

    vectorOps.SortVector();
    std::cout << "�������� ���������� VECTOR:" << std::endl;
    vectorOps.PrintVector();

    return 0;
}
