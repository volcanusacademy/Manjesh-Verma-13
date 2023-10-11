// Bank Account Abstraction: Create a C++ program that models a bank account using OOP principles. Create a BankAccount class with methods to deposit, withdraw, and check the balance while abstracting the internal details.
//Private the bank balance.

#include <iostream>
#include <string>

class Employee 
{
    private:
    std::string name;
    double salary;

public:
    // Constructor to initialize name and salary
    Employee(const std::string& empName, double empSalary) {
        name = empName;
        salary = empSalary;
    }

    // Method to set the employee's name
    void setName(const std::string& empName) {
        name = empName;
    }

    // Method to get the employee's salary
    double getSalary() const {
        return salary;
    }
};
int main() {
    // Create an Employee object
    Employee employee("John Doe", 50000.0);

    // Get the initial salary
    double initialSalary = employee.getSalary();
    std::cout << "Initial Salary: $" << initialSalary << std::endl;

    // Set the employee's name
    employee.setName("Jane Smith");

    // Get the updated name and salary
    std::string updatedName = employee.getName();
    double updatedSalary = employee.getSalary();

    std::cout << "Updated Name: " << updatedName << std::endl;
    std::cout << "Updated Salary: $" << updatedSalary << std::endl;

    return 0;
}