#include "VectorOperations.h"
#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    VectorOperations vectorOps;

    vectorOps.PrintVector();

    vectorOps.SortVector();
    std::cout << "Сортування VECTOR:" << std::endl;
    vectorOps.PrintVector();

    vectorOps.PrintSizeOnEachStep();

    vectorOps.InsertElement(3, 2);
    std::cout << "Додавання 3 на позицію 2:" << std::endl;
    vectorOps.PrintVector();

    vectorOps.EraseElement(4);
    std::cout << "Видалення елементу з позиції 4:" << std::endl;
    vectorOps.PrintVector();

    vectorOps.SortVector();
    std::cout << "Повторне сортування VECTOR:" << std::endl;
    vectorOps.PrintVector();

    return 0;
}
