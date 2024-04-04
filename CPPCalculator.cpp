#include <iostream>
#include <cmath>

int main() {
    char op;
    double num1, num2;

    std::cout << "Enter operation (+, -, *, /, ^ for exponentiation, sqrt for square root): ";
    std::cin >> op;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    if (op != 'sqrt') {
        std::cout << "Enter the second number: ";
        std::cin >> num2;
    }

    switch(op) {
        case '+':
            std::cout << "Result: " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << "Result: " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << "Result: " << num1 * num2 << std::endl;
            break;
        case '/':
            if (num2 != 0) {
                std::cout << "Result: " << num1 / num2 << std::endl;
            } else {
                std::cout << "Error: division by zero" << std::endl;
            }
            break;
        case '^':
            std::cout << "Result: " << pow(num1, num2) << std::endl;
            break;
        case 'sqrt':
            std::cout << "Result: " << sqrt(num1) << std::endl;
            break;
        default:
            std::cout << "Error: invalid operation" << std::endl;
    }

    return 0;
}
