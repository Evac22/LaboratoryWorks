#include "Library.h"
#include <iostream>
#include <Windows.h>
#include <vector> 

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Library library; // ��������� ��'��� �������� ���� Library
    std::vector<Book> myLibrary;

    // ������������ ��� ��� 10 ����
   Book book1("����� 1", "����� 1", 2020);
   Book book2("����� 2", "����� 2", 2019);
   Book book3("����� 3", "����� 3", 2018);
   Book book4("����� 4", "����� 4", 2017);
   Book book5("����� 5", "����� 5", 2016);
   Book book6("����� 6", "����� 6", 2015);
   Book book7("����� 7", "����� 7", 2014);
   Book book8("����� 8", "����� 8", 2013);
   Book book9("����� 9", "����� 9", 2012);
   Book book10("����� 10", "����� 10", 2011);

    // ������ ����� �� ��������
    library.AddBook(book1);
    library.AddBook(book2);
    library.AddBook(book3);
    library.AddBook(book4);
    library.AddBook(book5);
    library.AddBook(book6);
    library.AddBook(book7);
    library.AddBook(book8);
    library.AddBook(book9);
    library.AddBook(book10);

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
