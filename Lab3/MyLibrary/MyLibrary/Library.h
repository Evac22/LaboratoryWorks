#pragma once
#include "Book.h"
#include <vector>
class Library
{
public:
	// Конструктор ініціалізації бібліотеки
	Library();

    // Додати книгу до бібліотеки
    void AddBook(const Book& book);

    // Видалити книгу з бібліотеки за назвою
    void RemoveBook(const std::string& title);

    // Пошук книги по автору
    std::vector<Book> FindBooksByAuthor(const std::string& author) const;

    // Пошук книги за роком видання
    std::vector<Book> FindBooksByYear(int year) const;

    // Сортування книг за назвою
    void SortBooksByTitle();

    // Сортування книг за автором
    void SortBooksByAuthor();

    // Сортування книг за роком видання
    void SortBooksByYear();

    // Вивести всі книги у бібліотеці
    void DisplayAllBooks() const;

private:
    std::vector<Book> books;
};

