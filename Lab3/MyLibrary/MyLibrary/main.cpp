#include "Library.h"
#include "LibraryManager.h"
#include "Menu.h"
#include <iostream>
#include <Windows.h>
#include "LibraryInitializer.h"

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    // Создаем объект библиотеки типа Library
    Library library; 

    // Инициализация библиотеки
    InitializeLibrary(library);

    // Создаем объект меню
    Menu menu; 

    // Запускаем меню и передаем ему объект библиотеки
    menu.RunMenu(library); 

    return 0;
}
