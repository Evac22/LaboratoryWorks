#include "Library.h"
#include <iostream>
#include <algorithm>


// Клас "Бібліотека"
Library::Library() {
    // Ініціалізація бібліотеки
}

void Library::AddBook(const Book& book) {
    // Додавання книги до бібліотеки
    books.push_back(book);
}

void Library::RemoveBook(const std::string& title) {
    // Створимо ітератор для перебору книг в бібліотеці
    auto it = books.begin();

    // Пройдемося по всіх книгах у бібліотеці
    while (it != books.end()) {
        // Перевіряємо, чи назва поточної книги співпадає з вказаною назвою
        if (it->GetTitle() == title) {
            // Якщо знайдено книгу з вказаною назвою, то видаляємо її з бібліотеки
            it = books.erase(it);
            std::cout << "Книгу '" << title << "' видалено з бібліотеки." << std::endl;
        }
        else {
            // Якщо назва не співпадає, переходимо до наступної книги
            ++it;
        }
    }
}

std::vector<Book> Library::FindBooksByAuthor(const std::string& author) const {
    std::vector<Book> foundBooks; // Вектор для зберігання знайдених книг

    // Пройдемося по всіх книгах у бібліотеці
    for (const Book& book : books) {
        // Перевіряємо, чи автор поточної книги співпадає з вказаним автором
        if (book.GetAuthor() == author) {
            // Якщо знайдено книгу з вказаним автором, додаємо її до вектору
            foundBooks.push_back(book);
        }
    }

    return foundBooks; // Повертаємо вектор знайдених книг
}


std::vector<Book> Library::FindBooksByYear(int year) const {
    std::vector<Book> foundBooks; // Вектор для зберігання знайдених книг

    // Пройдемося по всіх книгах у бібліотеці
    for (const Book& book : books) {
        // Перевіряємо, чи рік видання поточної книги співпадає з вказаним роком
        if (book.GetYear() == year) {
            // Якщо знайдено книгу з вказаним роком видання, додаємо її до вектору
            foundBooks.push_back(book);
        }
    }

    return foundBooks; // Повертаємо вектор знайдених книг
}

void Library::SortBooksByTitle() {
    std::sort(books.begin(), books.end(), [](const Book& a, const Book& b) {
        return a.GetTitle() < b.GetTitle();
        });
}


// Сортування книг за роком видання
void Library::SortBooksByAuthor() {
    std::sort(books.begin(), books.end(), [](const Book& a, const Book& b) {
        return a.GetAuthor() < b.GetAuthor();
        });
}

void Library::SortBooksByYear() {
    // Реализация сортировки книг по году выпуска
    std::sort(books.begin(), books.end(), [](const Book& a, const Book& b) {
        return a.GetYear() < b.GetYear();
        });
}


void Library::DisplayAllBooks() const {
    std::cout << "Список книг у бібліотеці:" << std::endl;
    for (const Book& book : books) {
        book.Display();
    }
}
