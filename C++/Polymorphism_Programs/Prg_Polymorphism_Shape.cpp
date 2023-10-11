//Shape Polymorphism:
//Create a basic hierarchy of shapes (e.g., Circle, Square, Triangle) with a common method calculateArea(). Implement polymorphism by overriding this method in each shape class and demonstrate how you can calculate the area of different shapes using polymorphism.

#include <iostream>

// Base class Operation
class Operation {
public:
    virtual double calculate(double a, double b) const = 0;
};

// Derived class for addition
class Addition : public Operation {
public:
    double calculate(double a, double b) const override {
        return a + b;
    }
};

// Derived class for subtraction
class Subtraction : public Operation {
public:
    double calculate(double a, double b) const override {
        return a - b;
    }
};

// Derived class for multiplication
class Multiplication : public Operation {
public:
    double calculate(double a, double b) const override {
        return a * b;
    }
};

// Derived class for division
class Division : public Operation {
public:
    double calculate(double a, double b) const override {
        if (b == 0) {
            std::cerr << "Error: Division by zero" << std::endl;
            return 0.0;
        }
        return a / b;
    }
};

int main() {
    double num1, num2;
    char op;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    std::cout << "Enter operation (+, -, *, /): ";
    std::cin >> op;

    Operation* operation = nullptr;

    // Determine the operation based on the user's input
    switch (op) {
        case '+':
            operation = new Addition();
            break;
        case '-':
            operation = new Subtraction();
            break;
        case '*':
            operation = new Multiplication();
            break;
        case '/':
            operation = new Division();
            break;
        default:
            std::cerr << "Error: Invalid operation" << std::endl;
            return 1;
    }

    // Perform the calculation using polymorphism
    double result = operation->calculate(num1, num2);

    std::cout << "Result: " << result << std::endl;

    // Clean up
    delete operation;

    return 0;
}