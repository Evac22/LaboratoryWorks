#pragma once
#include <vector>

class VectorOperations {
public:
    // Конструктор класу
    VectorOperations();

    // Метод для виведення вмісту VECTOR
    void PrintVector();

    // Метод для сортування VECTOR
    void SortVector();

    // Метод для виведення розміру VECTOR на кожному кроці
    void PrintSizeOnEachStep();

    // Метод для додавання елементу на задану позицію у VECTOR
    void InsertElement(int value, size_t position);

    // Метод для видалення елементу з заданої позиції у VECTOR
    void EraseElement(size_t position);

private:
    std::vector<int> vector_;
};
