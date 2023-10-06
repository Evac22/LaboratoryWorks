#include "LibraryManager.h"
#include <iostream>

// ���������� ����� � ����������
void LibraryManager::AddBook(Library& library) {
    std::string title, author;
    int year;

    std::cin.ignore(); // ���������� ������ ����� ������ ����� ����������� �����

    std::cout << "������� �������� �����: ";
    std::getline(std::cin, title);

    std::cout << "������� ������ �����: ";
    std::getline(std::cin, author);

    std::cout << "������� ��� ������� �����: ";
    std::cin >> year;

    Book book(title, author, year);
    library.AddBook(book);

    std::cout << "����� ��������� � ����������." << std::endl;
}

// �������� ����� �� ����������
void LibraryManager::RemoveBook(Library& library) {
    std::string title;

    std::cin.ignore(); // ���������� ������ ����� ������ ����� ����������� �����

    std::cout << "������� �������� �����, ������� ������ �������: ";
    std::getline(std::cin, title);

    library.RemoveBook(title);
}

// ����� ���� �� ������ � ����������
void LibraryManager::FindBooksByAuthor(const Library& library) {
    std::string author;

    std::cin.ignore(); // ���������� ������ ����� ������ ����� ����������� �����

    std::cout << "������� ��� ������ ��� ������: ";
    std::getline(std::cin, author);

    std::vector<Book> booksByAuthor = library.FindBooksByAuthor(author);

    std::cout << "��������� �����:" << std::endl;
    for (const Book& book : booksByAuthor) {
        book.Display();
    }
}

// ����� ���� �� ���� ������� � ����������
void LibraryManager::FindBooksByYear(const Library& library) {
    int year;

    std::cout << "������� ��� ������� ���� ��� ������: ";
    std::cin >> year;

    std::vector<Book> booksByYear = library.FindBooksByYear(year);

    std::cout << "��������� �����:" << std::endl;
    for (const Book& book : booksByYear) {
        book.Display();
    }
}

// ���������� ���� �� �������� � ����������
void LibraryManager::SortBooksByTitle(Library& library) {
    library.SortBooksByTitle();
}

// ���������� ���� �� ������ � ����������
void LibraryManager::SortBooksByAuthor(Library& library) {
    library.SortBooksByAuthor();
}

// ���������� ���� �� ���� ������� � ����������
void LibraryManager::SortBooksByYear(Library& library) {
    library.SortBooksByYear();
}