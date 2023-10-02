#pragma once
#include <string>

class Book {
public:
    Book(const std::string& title, const std::string& author, int year);

    // ����� ��� ��������� ���������� ��� �����
    void Display() const;

    // ����� ��� ��������� ����� �����
    std::string GetTitle() const;

    // ����� ��� ��������� ������ �����
    std::string GetAuthor() const;

    // ����� ��� ��������� ���� ������� �����
    int GetYear() const;

private:
    std::string title;
    std::string author;
    int year;
};


