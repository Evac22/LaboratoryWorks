#include "Library.h"
#include <iostream>
#include <Windows.h>
#include <vector> 

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Library library; // Створюємо об'єкт бібліотеки типу Library
    std::vector<Book> myLibrary;

    // Захардкодимо дані для 10 книг
   Book book1("Книга 1", "Автор 1", 2020);
   Book book2("Книга 2", "Автор 2", 2019);
   Book book3("Книга 3", "Автор 3", 2018);
   Book book4("Книга 4", "Автор 4", 2017);
   Book book5("Книга 5", "Автор 5", 2016);
   Book book6("Книга 6", "Автор 6", 2015);
   Book book7("Книга 7", "Автор 7", 2014);
   Book book8("Книга 8", "Автор 8", 2013);
   Book book9("Книга 9", "Автор 9", 2012);
   Book book10("Книга 10", "Автор 10", 2011);

    // Додаємо книги до бібліотеки
    library.AddBook(book1);
    library.AddBook(book2);
    library.AddBook(book3);
    library.AddBook(book4);
    library.AddBook(book5);
    library.AddBook(book6);
    library.AddBook(book7);
    library.AddBook(book8);
    library.AddBook(book9);
    library.AddBook(book10);

    int choice;
    do {
        std::cout << "Оберіть опцію:" << std::endl;
        std::cout << "1. Додати книгу" << std::endl;
        std::cout << "2. Видалити книгу" << std::endl;
        std::cout << "3. Пошук книги по автору" << std::endl;
        std::cout << "4. Пошук книги за роком видання" << std::endl;
        std::cout << "5. Сортування за назвою" << std::endl;
        std::cout << "6. Сортування за автором" << std::endl;
        std::cout << "7. Сортування за роком видання" << std::endl;
        std::cout << "8. Вивести всі книги" << std::endl;
        std::cout << "0. Вийти" << std::endl;
        std::cout << "Оберіть опцію: ";
        std::cin >> choice;

        switch (choice) {
        case 1: // Додати книгу
        {
            std::string title, author;
            int year;
            std::cin.ignore();
            std::cout << "Введіть назву книги: ";
            std::getline(std::cin, title);
            std::cout << "Введіть автора: ";
            std::getline(std::cin, author);
            std::cout << "Введіть рік видання: ";
            std::cin >> year;
            // Создайте экземпляр класса Book и добавьте его в вашу библиотеку
            Book book(title, author, year);
            library.AddBook(book);
            std::cout << "Книгу додано до бібліотеки." << std::endl;
            break;
        }
        case 2: // Видалити книгу
        {
            std::cin.ignore();
            std::string titleToDelete;
            std::cout << "Введіть назву книги, яку потрібно видалити: ";
            std::getline(std::cin, titleToDelete);
            library.RemoveBook(titleToDelete);
            std::cout << "Книгу видалено з бібліотеки." << std::endl;
            break;
        }
        case 3: // Пошук книги по автору
        {
            std::cin.ignore();
            std::string authorToFind;
            std::cout << "Введіть автора для пошуку: ";
            std::getline(std::cin, authorToFind);
            std::vector<Book> booksByAuthor = library.FindBooksByAuthor(authorToFind);
            // Виведіть знайдені книги на екран
            std::cout << "Знайдені книги:" << std::endl;
            for (const Book& book : booksByAuthor) {
                book.Display();
            }
            break;
        }
        case 4: // Пошук книги за роком видання
        {
            int yearToFind;
            std::cout << "Введіть рік видання для пошуку: ";
            std::cin >> yearToFind;
            std::vector<Book> booksByYear = library.FindBooksByYear(yearToFind);
            // Виведіть знайдені книги на екран
            std::cout << "Знайдені книги:" << std::endl;
            for (const Book& book : booksByYear) {
                book.Display();
            }
            break;
        }
        case 5: // Сортування за назвою
            library.SortBooksByTitle();
            std::cout << "Книги відсортовані за назвою." << std::endl;
            break;
        case 6: // Сортування за автором
            library.SortBooksByAuthor();
            std::cout << "Книги відсортовані за автором." << std::endl;
            break;
        case 7: // Сортування за роком видання
            library.SortBooksByYear();
            std::cout << "Книги відсортовані за роком видання." << std::endl;
            break;
        case 8: // Вивести все книги
            std::cout << "Список книг у бібліотеці:" << std::endl;
            library.DisplayAllBooks();
            break;
        case 0:
            std::cout << "До побачення!" << std::endl;
            break;
        default:
            std::cout << "Невірний вибір. Спробуйте ще раз." << std::endl;
            break;
        }
    } while (choice != 0);

    return 0;
}
