#include <iostream>

#include "shape.hpp"

class Rectangle : public Shape {
public:
    int width;
    int height;

    int getArea() {
        return width * height;
    }
};

int main() {
    Rectangle rect;
    rect.width = 5;
    rect.height = 10;

    int area = rect.getArea();

    std::cout << "The area of the rectangle is: " << area << std::endl;

    return 0;
}