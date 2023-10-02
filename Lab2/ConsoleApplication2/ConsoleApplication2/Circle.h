#pragma once
#include "Shape.h"
#include <string>
class Circle : public Shape {
public:
    Circle(int x, int y, int radius, std::string color)
        : Shape(x, y), radius_(radius), color_(color) {}

    void draw() const override {
        std::cout << "Drawing a circle at (" << x_ << ", " << y_ << ") with radius " << radius_
            << " and color " << color_ << std::endl;
    }

private:
    int radius_;
    std::string color_;
};
