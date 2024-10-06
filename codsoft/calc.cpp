#include <iostream>

int main() {
    double num1, num2;
    char op;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    std::cout << "Enter an operation (+, -, *, /): ";
    std::cin >> op;

    if (op == '+') {
        std::cout << "Result: " << num1 + num2 << std::endl;
    } else if (op == '-') {
        std::cout << "Result: " << num1 - num2 << std::endl;
    } else if (op == '*') {
        std::cout << "Result: " << num1 * num2 << std::endl;
    } else if (op == '/') {
        if (num2 != 0) {
            std::cout << "Result: " << num1 / num2 << std::endl;
        } else {
            std::cout << "Error: Division by zero!" << std::endl;
        }
    } else {
        std::cout << "Invalid operation!" << std::endl;
    }
}
