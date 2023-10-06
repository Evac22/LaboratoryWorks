#pragma once
#include "Library.h"

class LibraryManager {
public:
    static void AddBook(Library& library);
    static void RemoveBook(Library& library);
    static void FindBooksByAuthor(const Library& library);
    static void FindBooksByYear(const Library& library);
    static void SortBooksByTitle(Library& library);
    static void SortBooksByAuthor(Library& library);
    static void SortBooksByYear(Library& library);
};
