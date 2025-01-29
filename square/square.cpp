#include <iostream>

#include "shape.hpp"

class Square  : public Shape {
public:
    int length;

    int getArea() {
        return length * length;
    }
};

int main() {
    Square rect;
    rect.length = 10;

    int area = rect.getArea();

    std::cout << "The area of the square is: " << area << std::endl;

    return 0;
}