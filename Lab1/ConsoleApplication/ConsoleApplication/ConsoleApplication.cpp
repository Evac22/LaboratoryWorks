#include <iostream>
#include <cstring>
#include "BitString.h"

int main() {
    int choice = 0;
    BitString bitStr1("1101");
    BitString bitStr2("1010");
    BitString negated;
    BitString copy;

    while (true) {
        std::cout << "Menu:" << std::endl;
        std::cout << "1. Display String and BitString info" << std::endl;
        std::cout << "2. Perform BitString operations" << std::endl;
        std::cout << "3. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1: {
            std::cout << "String 1: " << bitStr1.getLength() << " bytes" << std::endl;
            std::cout << "BitString 1: " << bitStr1.getLength() << " bits" << std::endl;
            std::cout << "BitString 2: " << bitStr2.getLength() << " bits" << std::endl;
            break;
        }
        case 2: {
            BitString sum = bitStr1 + bitStr2;
            BitString copy = bitStr1;
            BitString negated = bitStr2;
            negated.changeSign();

            std::cout << "Sum of BitStrings: " << sum.getLength() << " bits" << std::endl;
            std::cout << "Copy of BitString 1: " << copy.getLength() << " bits" << std::endl;
            std::cout << "Negated BitString 2: " << negated.getLength() << " bits" << std::endl;

            if (bitStr1 == bitStr2) {
                std::cout << "BitString 1 is equal to BitString 2" << std::endl;
            }
            else {
                std::cout << "BitString 1 is not equal to BitString 2" << std::endl;
            }
            break;
        }
        case 3: {
            std::cout << "Exiting the program." << std::endl;
            return 0;
        }
        default: {
            std::cout << "Invalid choice. Please enter a valid option." << std::endl;
            break;
        }
        }
    }

    return 0;
}