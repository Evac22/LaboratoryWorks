#include <iostream>
#include <string>
#pragma once

class Shape {
public:
    Shape(int x, int y) : x_(x), y_(y) {}

    virtual void draw() const {
        std::cout << "Drawing a shape at (" << x_ << ", " << y_ << ")" << std::endl;
    }

protected:
    int x_;
    int y_;
};