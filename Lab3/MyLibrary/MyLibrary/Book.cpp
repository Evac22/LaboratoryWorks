#include "Book.h"
#include <iostream>


// ����������� �����
Book::Book(const std::string& title, const std::string& author, int year)
    : title(title), author(author), year(year) {
    // ����������� ���� �����
}

// ����� ��� ��������� ���������� ��� �����
void Book::Display() const {
    std::cout << "�����: " << title << ", �����: " << author << ", г�: " << year << std::endl;
}

// ����� ��� ��������� ����� �����
std::string Book::GetTitle() const {
    return title;
}

// ����� ��� ��������� ������ �����
std::string Book::GetAuthor() const {
    return author;
}

// ����� ��� ��������� ���� ������� �����
int Book::GetYear() const {
    return year;
}
