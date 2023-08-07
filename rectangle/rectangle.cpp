// rectangle.cpp

#include "rectangle.h"

Rectangle::Rectangle(double length, double width) : length_(length), width_(width) {}

double Rectangle::getLength() const {
    return length_;
}

double Rectangle::getWidth() const {
    return width_;
}

double Rectangle::getArea() const {
    return length_ * width_;
}
