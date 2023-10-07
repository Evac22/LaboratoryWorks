#include <iostream>
#include <Windows.h>

class B1 {
public:
    void MethodB1() {
        std::cout << "MethodB1() в класі B1" << std::endl;
    }
};

class B2 {
private:
    void MethodB2() {
        std::cout << "MethodB2() в класі B2" << std::endl;
    }

    friend class D4;
};

class D1 : public B1 {
public:
    void MethodD1() {
        std::cout << "MethodD1() в класі D1" << std::endl;
    }
};

class D2 : private B1 {
public:
    void MethodD2() {
        std::cout << "MethodD2() в класі D2" << std::endl;
    }

    friend class D4;
};

class D4 : public D1, private D2 {
public:
    void MethodD4() {
        std::cout << "MethodD4() в класі D4" << std::endl;
    }

    void AccessB1Method() {
        B1::MethodB1(); // Виклик MethodB1() з B1 через D1
    }

    void AccessB2Method() {
        B2 b2;
        b2.MethodB2(); // Виклик MethodB2() з B2
    }
};

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    D4 d4;
    d4.MethodD1(); // Метод з D1
    // Тест 1: Виклик методів з D4
    d4.MethodD4(); // Метод з D4

    // Тест 2: Виклик методу з D1 через D4
    d4.AccessB1Method(); // Метод з B1 (викликається через AccessB1Method)

    // Тест 3: Виклик методу з B2 через D4
    d4.AccessB2Method(); // Метод з B2 (викликається через AccessB2Method)

    return 0;
}