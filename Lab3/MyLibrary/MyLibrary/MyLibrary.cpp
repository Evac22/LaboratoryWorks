#include "Library.h"
#include <iostream>
#include <Windows.h>
#include <vector> 

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Library library; // ��������� ��'��� �������� ���� Library

    // ������������ ��� ��� 10 ���� � ������ �� �� ��������
    for (int i = 1; i <= 10; ++i) {
        std::string title = "����� " + std::to_string(i);
        std::string author = "����� " + std::to_string(i);
        int year = 2020 - i; // ������ ������ ��� ����

        Book book(title, author, year);
        library.AddBook(book);
    }

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
        {
            std::string title, author;
            int year;
            std::cin.ignore();
            std::cout << "������ ����� �����: ";
            std::getline(std::cin, title);
            std::cout << "������ ������: ";
            std::getline(std::cin, author);
            std::cout << "������ �� �������: ";
            std::cin >> year;
            // �������� ��������� ������ Book � �������� ��� � ���� ����������
            Book book(title, author, year);
            library.AddBook(book);
            std::cout << "����� ������ �� ��������." << std::endl;
            break;
        }
        case 2: // �������� �����
        {
            std::cin.ignore();
            std::string titleToDelete;
            std::cout << "������ ����� �����, ��� ������� ��������: ";
            std::getline(std::cin, titleToDelete);
            library.RemoveBook(titleToDelete);
            std::cout << "����� �������� � ��������." << std::endl;
            break;
        }
        case 3: // ����� ����� �� ������
        {
            std::cin.ignore();
            std::string authorToFind;
            std::cout << "������ ������ ��� ������: ";
            std::getline(std::cin, authorToFind);
            std::vector<Book> booksByAuthor = library.FindBooksByAuthor(authorToFind);
            // ������� ������� ����� �� �����
            std::cout << "������� �����:" << std::endl;
            for (const Book& book : booksByAuthor) {
                book.Display();
            }
            break;
        }
        case 4: // ����� ����� �� ����� �������
        {
            int yearToFind;
            std::cout << "������ �� ������� ��� ������: ";
            std::cin >> yearToFind;
            std::vector<Book> booksByYear = library.FindBooksByYear(yearToFind);
            // ������� ������� ����� �� �����
            std::cout << "������� �����:" << std::endl;
            for (const Book& book : booksByYear) {
                book.Display();
            }
            break;
        }
        case 5: // ���������� �� ������
            library.SortBooksByTitle();
            std::cout << "����� ���������� �� ������." << std::endl;
            break;
        case 6: // ���������� �� �������
            library.SortBooksByAuthor();
            std::cout << "����� ���������� �� �������." << std::endl;
            break;
        case 7: // ���������� �� ����� �������
            library.SortBooksByYear();
            std::cout << "����� ���������� �� ����� �������." << std::endl;
            break;
        case 8: // ������� ��� �����
            std::cout << "������ ���� � ��������:" << std::endl;
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

    return 0;
}
