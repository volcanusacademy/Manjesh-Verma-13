//Design a C++ class Rectangle with private attributes length and width. Provide public methods to set and get these attributes, and calculate the area of the rectangle.

#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor to initialize length and width
    Rectangle(double l, double w) : length(l), width(w) {}

    // Setter method for length
    void setLength(double l) {
        length = l;
    }

    // Getter method for length
    double getLength() const {
        return length;
    }

    // Setter method for width
    void setWidth(double w) {
        width = w;
    }

    // Getter method for width
    double getWidth() const {
        return width;
    }

    // Method to calculate the area of the rectangle
    double calculateArea() const {
        return length * width;
    }
};

int main() {
    // Create a Rectangle object
    Rectangle rect(5.0, 4.0);

    // Access and display attributes
    std::cout << "Length: " << rect.getLength() << std::endl;
    std::cout << "Width: " << rect.getWidth() << std::endl;

    // Calculate and display the area
    double area = rect.calculateArea();
    std::cout << "Area: " << area << std::endl;

    // Modify attributes using setter methods
    rect.setLength(6.0);
    rect.setWidth(3.0);

    // Display updated attributes and area
    std::cout << "Updated Length: " << rect.getLength() << std::endl;
    std::cout << "Updated Width: " << rect.getWidth() << std::endl;
    std::cout << "Updated Area: " << rect.calculateArea() << std::endl;

    return 0;
}