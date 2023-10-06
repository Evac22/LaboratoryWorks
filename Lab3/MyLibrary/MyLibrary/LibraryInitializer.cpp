#include "LibraryInitializer.h"
#include "Library.h"
#include "Book.h"

void InitializeLibrary(Library& library) {
    // ����������� ������ ��� 10 ���� � ������� �� � ����������
    for (int i = 1; i <= 10; ++i) {
        std::string title = "����� " + std::to_string(i);
        std::string author = "����� " + std::to_string(i);
        int year = 2020 - i; // ������ ������ ��� ����

        Book book(title, author, year);
        library.AddBook(book);
    }
}