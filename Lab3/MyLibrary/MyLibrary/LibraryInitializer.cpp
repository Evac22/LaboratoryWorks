#include "LibraryInitializer.h"
#include "Library.h"
#include "Book.h"

void InitializeLibrary(Library& library) {
    // Захардкодим данные для 10 книг и добавим их в библиотеку
    for (int i = 1; i <= 10; ++i) {
        std::string title = "Книга " + std::to_string(i);
        std::string author = "Автор " + std::to_string(i);
        int year = 2020 - i; // Просто пример для года

        Book book(title, author, year);
        library.AddBook(book);
    }
}