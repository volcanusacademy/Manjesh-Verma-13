//Create a program in C++ to print area of square, triangle and rectangle by creating a class and object.

#include <iostream>

using namespace std;

// Class for shapes
class Shape 
{
    public:
    virtual double calculateArea() = 0;
};

// Class for Square
class Square : public Shape 
{
    private:
    double side;

    public:
    Square(double s) : side(s) 
    {}

    double calculateArea() override 
    {
        return side * side;
    }
};

// Class for Triangle
class Triangle : public Shape 
{
    private:
    double base;
    double height;

    public:
    Triangle(double b, double h) : base(b), height(h) 
    {}

    double calculateArea() override 
    {
        return 0.5 * base * height;
    }
};

// Class for Rectangle
class Rectangle : public Shape 
{
    private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) 
    {}

    double calculateArea() override 
    {
        return length * width;
    }
};

int main() 
{
    double side, base, height, length, width;

    cout << "Enter the side length of the square: ";
    cin >> side;

    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;

    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;

    Square square(side);
    Triangle triangle(base, height);
    Rectangle rectangle(length, width);

    cout << "Area of Square: " << square.calculateArea() << endl;
    cout << "Area of Triangle: " << triangle.calculateArea() << endl;
    cout << "Area of Rectangle: " << rectangle.calculateArea() << endl;

    return 0;
}
