#include "LibraryManager.h"
#include <iostream>

// Добавление книги в библиотеку
void LibraryManager::AddBook(Library& library) {
    std::string title, author;
    int year;

    std::cin.ignore(); // Игнорируем символ новой строки после предыдущего ввода

    std::cout << "Введите название книги: ";
    std::getline(std::cin, title);

    std::cout << "Введите автора книги: ";
    std::getline(std::cin, author);

    std::cout << "Введите год выпуска книги: ";
    std::cin >> year;

    Book book(title, author, year);
    library.AddBook(book);

    std::cout << "Книга добавлена в библиотеку." << std::endl;
}

// Удаление книги из библиотеки
void LibraryManager::RemoveBook(Library& library) {
    std::string title;

    std::cin.ignore(); // Игнорируем символ новой строки после предыдущего ввода

    std::cout << "Введите название книги, которую хотите удалить: ";
    std::getline(std::cin, title);

    library.RemoveBook(title);
}

// Поиск книг по автору в библиотеке
void LibraryManager::FindBooksByAuthor(const Library& library) {
    std::string author;

    std::cin.ignore(); // Игнорируем символ новой строки после предыдущего ввода

    std::cout << "Введите имя автора для поиска: ";
    std::getline(std::cin, author);

    std::vector<Book> booksByAuthor = library.FindBooksByAuthor(author);

    std::cout << "Найденные книги:" << std::endl;
    for (const Book& book : booksByAuthor) {
        book.Display();
    }
}

// Поиск книг по году выпуска в библиотеке
void LibraryManager::FindBooksByYear(const Library& library) {
    int year;

    std::cout << "Введите год выпуска книг для поиска: ";
    std::cin >> year;

    std::vector<Book> booksByYear = library.FindBooksByYear(year);

    std::cout << "Найденные книги:" << std::endl;
    for (const Book& book : booksByYear) {
        book.Display();
    }
}

// Сортировка книг по названию в библиотеке
void LibraryManager::SortBooksByTitle(Library& library) {
    library.SortBooksByTitle();
}

// Сортировка книг по автору в библиотеке
void LibraryManager::SortBooksByAuthor(Library& library) {
    library.SortBooksByAuthor();
}

// Сортировка книг по году выпуска в библиотеке
void LibraryManager::SortBooksByYear(Library& library) {
    library.SortBooksByYear();
}