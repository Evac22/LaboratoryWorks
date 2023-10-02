#pragma once
#include "Shape.h"
#include <string>
class Square : public Shape {
public:
    Square(int x, int y, int sideLength, std::string color)
        : Shape(x, y), sideLength_(sideLength), color_(color) {}

    void draw() const override {
        std::cout << "Drawing a square at (" << x_ << ", " << y_ << ") with side length " << sideLength_
            << " and color " << color_ << std::endl;
    }

private:
    int sideLength_;
    std::string color_;
};