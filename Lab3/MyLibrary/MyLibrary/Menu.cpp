
#include "Menu.h"
#include <iostream>
#include "Library.h"
#include "LibraryManager.h"


void Menu::RunMenu(Library& library) {
    int choice;
    do {
        std::cout << "������ �����:" << std::endl;
        std::cout << "1. ������ �����" << std::endl;
        std::cout << "2. �������� �����" << std::endl;
        std::cout << "3. ����� ����� �� ������" << std::endl;
        std::cout << "4. ����� ����� �� ����� �������" << std::endl;
        std::cout << "5. ���������� �� ������" << std::endl;
        std::cout << "6. ���������� �� �������" << std::endl;
        std::cout << "7. ���������� �� ����� �������" << std::endl;
        std::cout << "8. ������� �� �����" << std::endl;
        std::cout << "0. �����" << std::endl;
        std::cout << "������ �����: ";
        std::cin >> choice;

        switch (choice) {
        case 1: // ������ �����
            LibraryManager::AddBook(library);
            std::cout << "����� ������ �� ��������." << std::endl;
            break;
        case 2: // �������� �����
            LibraryManager::RemoveBook(library);
            std::cout << "����� �������� � ��������." << std::endl;
            break;
        case 3: // ����� ����� �� ������
            LibraryManager::FindBooksByAuthor(library);
            break;
        case 4: // ����� ����� �� ����� �������
            LibraryManager::FindBooksByYear(library);
            break;
        case 5: // ���������� �� ������
            LibraryManager::SortBooksByTitle(library);
            std::cout << "����� ���������� �� ������." << std::endl;
            break;
        case 6: // ���������� �� �������
            LibraryManager::SortBooksByAuthor(library);
            std::cout << "����� ���������� �� �������." << std::endl;
            break;
        case 7: // ���������� �� ����� �������
            LibraryManager::SortBooksByYear(library);
            std::cout << "����� ���������� �� ����� �������." << std::endl;
            break;
        case 8: // ������� ��� �����
            library.DisplayAllBooks();
            break;
        case 0:
            std::cout << "�� ���������!" << std::endl;
            break;
        default:
            std::cout << "������� ����. ��������� �� ���." << std::endl;
            break;
        }
    } while (choice != 0);
};
