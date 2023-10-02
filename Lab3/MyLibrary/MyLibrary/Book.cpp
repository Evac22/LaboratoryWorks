#include "Book.h"
#include <iostream>


// Конструктор класу
Book::Book(const std::string& title, const std::string& author, int year)
    : title(title), author(author), year(year) {
    // Ініціалізація полів книги
}

// Метод для виведення інформації про книгу
void Book::Display() const {
    std::cout << "Назва: " << title << ", Автор: " << author << ", Рік: " << year << std::endl;
}

// Метод для отримання назви книги
std::string Book::GetTitle() const {
    return title;
}

// Метод для отримання автора книги
std::string Book::GetAuthor() const {
    return author;
}

// Метод для отримання року видання книги
int Book::GetYear() const {
    return year;
}
