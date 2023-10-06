#include "Library.h"
#include "LibraryManager.h"
#include "Menu.h"
#include <iostream>
#include <Windows.h>
#include "LibraryInitializer.h"

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    // ������� ������ ���������� ���� Library
    Library library; 

    // ������������� ����������
    InitializeLibrary(library);

    // ������� ������ ����
    Menu menu; 

    // ��������� ���� � �������� ��� ������ ����������
    menu.RunMenu(library); 

    return 0;
}
