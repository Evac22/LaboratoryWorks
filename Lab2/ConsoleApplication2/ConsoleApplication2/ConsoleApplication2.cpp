#include "Circle.h"
#include "Square.h"
int main() {
    Square square1(10, 20, 30, "red");
    Circle circle1(50, 60, 25, "blue");

    square1.draw(); // Відобразити квадрат
    circle1.draw(); // Відобразити коло

    return 0;
}