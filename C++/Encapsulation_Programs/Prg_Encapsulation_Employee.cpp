//Write a C++ class Employee with private attributes name and salary. Provide a method to set the name and a method to get the salary.

#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    double salary;

public:
    // Constructor to initialize name and salary
    Employee(const std::string& n, double s) : name(n), salary(s) {}

    // Setter method for name
    void setName(const std::string& n) {
        name = n;
    }

    // Getter method for name
    std::string getName() const {
        return name;
    }

    // Getter method for salary
    double getSalary() const {
        return salary;
    }
};

int main() {
    // Create an Employee object
    Employee employee("John Doe", 50000.0);

    // Access and display attributes
    std::cout << "Name: " << employee.getName() << std::endl;
    std::cout << "Salary: $" << employee.getSalary() << std::endl;

    // Modify the name using the setter method
    employee.setName("Jane Smith");

    // Display the updated name
    std::cout << "Updated Name: " << employee.getName() << std::endl;

    return 0;
}