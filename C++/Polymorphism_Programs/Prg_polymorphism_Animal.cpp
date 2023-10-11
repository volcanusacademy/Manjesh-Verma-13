//Animal Polymorphism:
//Create a simple hierarchy of animals (e.g., Dog, Cat, Bird) with a common method makeSound(). Implement polymorphism by overriding this method in each animal class and demonstrate how you can make different animals produce their respective sounds using polymorphism.

#include <iostream>
#include <cmath>

// Base Shape class
class Shape {
public:
    virtual double calculateArea() const {
        return 0.0;
    }
};

// Circle class
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double calculateArea() const override {
        return M_PI * radius * radius;
    }
};

// Square class
class Square : public Shape {
private:
    double side;

public:
    Square(double s) : side(s) {}

    double calculateArea() const override {
        return side * side;
    }
};

// Triangle class
class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    double calculateArea() const override {
        return 0.5 * base * height;
    }
};

int main() {
    // Create instances of different shapes
    Circle circle(5.0);
    Square square(4.0);
    Triangle triangle(6.0, 3.0);

    // Calculate and print areas using polymorphism
    Shape* shapes[] = {&circle, &square, &triangle};

    for (int i = 0; i < 3; i++) {
        double area = shapes[i]->calculateArea();
        std::cout << "Area of " << typeid(*shapes[i]).name() << ": " << area << std::endl;
    }

    return 0;
}