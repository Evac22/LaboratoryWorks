#include "VectorOperations.h"
#include <iostream>
#include <algorithm>

VectorOperations::VectorOperations() {
    // Ініціалізуємо VECTOR у конструкторі
    vector_.push_back(5);
    vector_.push_back(2);
    vector_.push_back(8);
    vector_.push_back(1);
    vector_.push_back(6);
}

void VectorOperations::PrintVector() {
    std::cout << "VECTOR: ";
    for (const int& element : vector_) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

void VectorOperations::SortVector() {
    // Сортуємо VECTOR
    std::sort(vector_.begin(), vector_.end());
}

void VectorOperations::PrintSizeOnEachStep() {
    // Виводимо розмір VECTOR на кожному кроці
    for (const int& element : vector_) {
        std::cout << "Розмір VECTOR: " << vector_.size() << std::endl;
    }
}

void VectorOperations::InsertElement(int value, size_t position) {
    if (position <= vector_.size()) {
        // Додаємо елемент на задану позицію у VECTOR
        vector_.insert(vector_.begin() + position, value);
    }
}

void VectorOperations::EraseElement(size_t position) {
    if (position < vector_.size()) {
        // Видаляємо елемент з заданої позиції у VECTOR
        vector_.erase(vector_.begin() + position);
    }
}
