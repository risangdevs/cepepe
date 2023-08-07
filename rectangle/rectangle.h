// rectangle.h

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
public:
    Rectangle(double length, double width);
    double getLength() const;
    double getWidth() const;
    double getArea() const;

private:
    double length_;
    double width_;
};

#endif // RECTANGLE_H
