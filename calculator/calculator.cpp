// calculator.cpp

#include "calculator.h"

Calculator::Calculator() {} // Constructor doesn't need any implementation for this example

double Calculator::add(double a, double b) {
    return a + b;
}

double Calculator::subtract(double a, double b) {
    return a - b;
}

double Calculator::multiply(double a, double b) {
    return a * b;
}

double Calculator::divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        throw std::invalid_argument("Cannot divide by zero.");
    }
}
