#pragma once
#include <string>

class Book {
public:
    Book(const std::string& title, const std::string& author, int year);

    // Метод для виведення інформації про книгу
    void Display() const;

    // Метод для отримання назви книги
    std::string GetTitle() const;

    // Метод для отримання автора книги
    std::string GetAuthor() const;

    // Метод для отримання року видання книги
    int GetYear() const;

private:
    std::string title;
    std::string author;
    int year;
};


