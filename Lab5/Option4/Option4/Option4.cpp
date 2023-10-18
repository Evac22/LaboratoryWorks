#include <iostream>
#include <vector>
#include <algorithm>
#include <Windows.h>

template <typename T>
class MinElementFinder {
public:
    // Конструктор класу, який ініціалізує внутрішню структуру даних
    MinElementFinder(std::vector<T> data) : data_(data) {}

    // Метод, який знаходить мінімальний елемент у масиві
    T FindMin() {
        if (data_.empty()) {
            throw std::logic_error("Пустий масив");
        }

        // Використовуємо стандартний алгоритм для пошуку мінімального елементу
        T min_element = data_[0];
        for (const T& element : data_) {
            if (element < min_element) {
                min_element = element;
            }
        }

        return min_element;
    }

private:
    std::vector<T> data_;
};

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    std::vector<int> int_data = { 5, 2, 8, 1, 6 };
    MinElementFinder<int> int_min_finder(int_data);
    int min_int = int_min_finder.FindMin();
    std::cout << "Мінімальний елемент int: " << min_int << std::endl;

    std::vector<float> float_data = { 3.14, 1.0, 2.718, 0.0 };
    MinElementFinder<float> float_min_finder(float_data);
    float min_float = float_min_finder.FindMin();
    std::cout << "Мінімальний елемент float: " << min_float << std::endl;

    std::vector<long> long_data = { 1000, 2000, 3000, 4000 };
    MinElementFinder<long> long_min_finder(long_data);
    long min_long = long_min_finder.FindMin();
    std::cout << "Мінімальний елемент long: " << min_long << std::endl;

    return 0;
}
