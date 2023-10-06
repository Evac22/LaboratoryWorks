#include "Library.h"
#include <iostream>
#include <algorithm>


// ���� "���������"
Library::Library() {
    // ����������� ��������
}

void Library::AddBook(const Book& book) {
    // ��������� ����� �� ��������
    books.push_back(book);
}

void Library::RemoveBook(const std::string& title) {
    // �������� �������� ��� �������� ���� � ��������
    auto it = books.begin();

    // ���������� �� ��� ������ � ��������
    while (it != books.end()) {
        // ����������, �� ����� ������� ����� ������� � �������� ������
        if (it->GetTitle() == title) {
            // ���� �������� ����� � �������� ������, �� ��������� �� � ��������
            it = books.erase(it);
            std::cout << "����� '" << title << "' �������� � ��������." << std::endl;
        }
        else {
            // ���� ����� �� �������, ���������� �� �������� �����
            ++it;
        }
    }
}

std::vector<Book> Library::FindBooksByAuthor(const std::string& author) const {
    std::vector<Book> foundBooks; // ������ ��� ��������� ��������� ����

    // ���������� �� ��� ������ � ��������
    for (const Book& book : books) {
        // ����������, �� ����� ������� ����� ������� � �������� �������
        if (book.GetAuthor() == author) {
            // ���� �������� ����� � �������� �������, ������ �� �� �������
            foundBooks.push_back(book);
        }
    }

    return foundBooks; // ��������� ������ ��������� ����
}


std::vector<Book> Library::FindBooksByYear(int year) const {
    std::vector<Book> foundBooks; // ������ ��� ��������� ��������� ����

    // ���������� �� ��� ������ � ��������
    for (const Book& book : books) {
        // ����������, �� �� ������� ������� ����� ������� � �������� �����
        if (book.GetYear() == year) {
            // ���� �������� ����� � �������� ����� �������, ������ �� �� �������
            foundBooks.push_back(book);
        }
    }

    return foundBooks; // ��������� ������ ��������� ����
}

void Library::SortBooksByTitle() {
    std::sort(books.begin(), books.end(), [](const Book& a, const Book& b) {
        return a.GetTitle() < b.GetTitle();
        });
}


// ���������� ���� �� ����� �������
void Library::SortBooksByAuthor() {
    std::sort(books.begin(), books.end(), [](const Book& a, const Book& b) {
        return a.GetAuthor() < b.GetAuthor();
        });
}

void Library::SortBooksByYear() {
    // ���������� ���������� ���� �� ���� �������
    std::sort(books.begin(), books.end(), [](const Book& a, const Book& b) {
        return a.GetYear() < b.GetYear();
        });
}


void Library::DisplayAllBooks() const {
    std::cout << "������ ���� � ��������:" << std::endl;
    for (const Book& book : books) {
        book.Display();
    }
}
