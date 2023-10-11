// Calculator Polymorphism:
//Implement a simple calculator with operations like addition, subtraction, multiplication, and division. Use polymorphism to handle these operations in a way that allows you to perform calculations on different numeric types (e.g., integers, floats) using the same calculator class.

#include <iostream>

// Base class Employee
class Employee {
public:
    Employee(const std::string& name, int id) : name(name), id(id) {}

    virtual double calculateSalary() const = 0; // Pure virtual function

    void displayInfo() const {
        std::cout << "Employee ID: " << id << "\n";
        std::cout << "Employee Name: " << name << "\n";
        std::cout << "Salary: $" << calculateSalary() << "\n";
    }

private:
    std::string name;
    int id;
};

// Derived class Full-Time Employee
class FullTimeEmployee : public Employee {
public:
    FullTimeEmployee(const std::string& name, int id, double monthlySalary)
        : Employee(name, id), monthlySalary(monthlySalary) {}

    double calculateSalary() const override {
        return monthlySalary;
    }

private:
    double monthlySalary;
};

// Derived class Part-Time Employee
class PartTimeEmployee : public Employee {
public:
    PartTimeEmployee(const std::string& name, int id, double hourlyRate, int hoursWorked)
        : Employee(name, id), hourlyRate(hourlyRate), hoursWorked(hoursWorked) {}

    double calculateSalary() const override {
        return hourlyRate * hoursWorked;
    }

private:
    double hourlyRate;
    int hoursWorked;
};

// Derived class Intern
class Intern : public Employee {
public:
    Intern(const std::string& name, int id, int durationInMonths)
        : Employee(name, id), durationInMonths(durationInMonths) {}

    double calculateSalary() const override {
        // Interns typically receive no salary or a fixed stipend
        // We'll assume a stipend of $1000 per month
        return 1000.0 * durationInMonths;
    }

private:
    int durationInMonths;
};

int main() {
    FullTimeEmployee fullTimeEmployee("Alice", 101, 5000.0);
    PartTimeEmployee partTimeEmployee("Bob", 102, 15.0, 120);
    Intern intern("Charlie", 103, 6);

    fullTimeEmployee.displayInfo();
    partTimeEmployee.displayInfo();
    intern.displayInfo();

    return 0;
}