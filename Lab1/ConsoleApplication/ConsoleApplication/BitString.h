#pragma once
#include "String.h"
class BitString : public String {
public:

    BitString() : String() {}

    BitString(const char* text) : String() {
        length = static_cast<int>(strlen(text));
        str = new char[length + 1];
        bool valid = true;

        for (int i = 0; i < length; i++) {
            if (text[i] != '0' && text[i] != '1') {
                valid = false;
                break;
            }
        }

        if (!valid) {
            clear();
        }
        else {
            strcpy_s(str, length + 1, text);
        }
    }

    BitString(const BitString& other) : String(other) {}

    void changeSign() {
        for (int i = 0; i < length; i++) {
            if (str[i] == '0') {
                str[i] = '1';
            }
            else {
                str[i] = '0';
            }
        }
    }

    BitString& operator=(const BitString& other) {
        if (this == &other) {
            return *this;
        }

        clear();
        length = other.length;
        str = new char[length + 1];
        strcpy_s(str, length + 1, other.str);
        return *this;
    }

    BitString operator+(const BitString& other) {
        int newLength = (length > other.length) ? length : other.length;
        BitString result;
        result.length = newLength + 1; // Увеличиваем длину на 1 для учета переноса
        result.str = new char[result.length + 1];
        memset(result.str, '0', result.length);

        int carry = 0; // Перенос

        for (int i = length - 1, j = other.length - 1, k = newLength; k >= 0; i--, j--, k--) {
            char bit1 = (i >= 0) ? str[i] : '0';
            char bit2 = (j >= 0) ? other.str[j] : '0';

            int sum = (bit1 - '0') + (bit2 - '0') + carry;
            result.str[k] = (sum % 2) + '0'; // Записываем текущий бит суммы

            carry = sum / 2; // Рассчитываем перенос для следующего разряда
        }

        return result;
    }

    bool operator==(const BitString& other) const {
        if (length != other.length) {
            return false;
        }

        for (int i = 0; i < length; i++) {
            if (str[i] != other.str[i]) {
                return false;
            }
        }

        return true;
    }
};

