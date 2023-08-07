// main.cpp

#include <iostream>
#include "rectangle.h"

int main() {
    double length, width;
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    Rectangle rect(length, width);

    std::cout << "Rectangle Area: " << rect.getArea() << std::endl;

    return 0;
}
