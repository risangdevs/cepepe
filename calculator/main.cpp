// main.cpp

#include <iostream>
#include "calculator.h"

int main() {
    Calculator calculator;

    double a, b;
    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number: ";
    std::cin >> b;

    std::cout << "Addition: " << calculator.add(a, b) << std::endl;
    std::cout << "Subtraction: " << calculator.subtract(a, b) << std::endl;
    std::cout << "Multiplication: " << calculator.multiply(a, b) << std::endl;

    try {
        std::cout << "Division: " << calculator.divide(a, b) << std::endl;
    } catch (std::exception& e) {
        std::cout << "Division Error: " << e.what() << std::endl;
    }

    return 0;
}
