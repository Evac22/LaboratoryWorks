#include <iostream>
#include "C.h"
#include "B.h"


int main() {
    A a_obj(10);
    B b_obj(20, 30);
    C c_obj(40, 50);

    // Використання операції "." для виклику функцій-членів класів
    a_obj.display();
    b_obj.display();
    c_obj.display();

    // Використання операції "->" з використанням вказівників на базовий та похідні класи
    A* ptrA = &b_obj;
    B* ptrB = &b_obj;
    C* ptrC = &c_obj;

    ptrA->display();
    ptrB->display();
    ptrC->display();

    // Використання методів для проведення математичних операцій
    int sum = ptrB->add();
    int diff = ptrC->subtract();

    std::cout << "Sum in B: " << sum << std::endl;
    std::cout << "Difference in C: " << diff << std::endl;

    return 0;
}
