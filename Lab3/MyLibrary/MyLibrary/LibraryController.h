#pragma once
#include "Book.h"
#include <vector>
class Library
{
public:
	// ����������� ����������� ��������
	Library();

    // ������ ����� �� ��������
    void AddBook(const Book& book);

    // �������� ����� � �������� �� ������
    void RemoveBook(const std::string& title);

    // ����� ����� �� ������
    std::vector<Book> FindBooksByAuthor(const std::string& author) const;

    // ����� ����� �� ����� �������
    std::vector<Book> FindBooksByYear(int year) const;

    // ���������� ���� �� ������
    void SortBooksByTitle();

    // ���������� ���� �� �������
    void SortBooksByAuthor();

    // ���������� ���� �� ����� �������
    void SortBooksByYear();

    // ������� �� ����� � ��������
    void DisplayAllBooks() const;

private:
    std::vector<Book> books;
};

