
#include "Menu.h"
#include <iostream>
#include "Library.h"
#include "LibraryManager.h"


void Menu::RunMenu(Library& library) {
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
            LibraryManager::AddBook(library);
            std::cout << "Книгу додано до бібліотеки." << std::endl;
            break;
        case 2: // Видалити книгу
            LibraryManager::RemoveBook(library);
            std::cout << "Книгу видалено з бібліотеки." << std::endl;
            break;
        case 3: // Пошук книги по автору
            LibraryManager::FindBooksByAuthor(library);
            break;
        case 4: // Пошук книги за роком видання
            LibraryManager::FindBooksByYear(library);
            break;
        case 5: // Сортування за назвою
            LibraryManager::SortBooksByTitle(library);
            std::cout << "Книги відсортовані за назвою." << std::endl;
            break;
        case 6: // Сортування за автором
            LibraryManager::SortBooksByAuthor(library);
            std::cout << "Книги відсортовані за автором." << std::endl;
            break;
        case 7: // Сортування за роком видання
            LibraryManager::SortBooksByYear(library);
            std::cout << "Книги відсортовані за роком видання." << std::endl;
            break;
        case 8: // Вивести все книги
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
};
