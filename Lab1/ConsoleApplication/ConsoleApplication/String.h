#pragma once
#include <iostream>
#include <cstring>

class String {
protected:
    char* str;
    int length;

public:
    String() : str(nullptr), length(0) {}

    String(const char* text) {
        length = static_cast<int>(strlen(text));
        str = new char[length + 1];
        strcpy_s(str, length + 1, text);
    }

    String(const String& other) {
        length = other.length;
        str = new char[length + 1];
        strcpy_s(str, length + 1, other.str);
    }

    int getLength() const {
        return length;
    }

    void clear() {
        if (str != nullptr) {
            delete[] str;
            str = nullptr;
            length = 0;
        }
    }

    virtual ~String() {
        clear();
    }
};

