// Employee Inheritance: Define a base class Employee with attributes like name, employeeID, and salary. Create subclasses (e.g., Manager, Developer, Salesperson) that inherit from Employee and add attributes and methods specific to each job role.

#include <iostream>
#include <string.h>
using namespace std;

class Employee {
public:
    string name;
    int emp_id, salary;
};

class Manager : public Employee {
public:
    Manager() {
        name = "Rahul Soni";
        emp_id = 1252;
        salary = 20000;
        cout << "\nManager name: " << name << ", Manager ID: " << emp_id << ", Manager Salary: " << salary << endl;
    }
};

class Developer : public Employee {
public:
    Developer() {
        name = "Mohit prajaoat";
        emp_id = 1253;
        salary = 30000;
        cout << "\nDeveloper name: " << name << ", Developer ID: " << emp_id << ", Developer Salary: " << salary << endl;
    }
};

class Salesperson : public Employee {
public:
    Salesperson() {
        name = "Aayush panchal";
        emp_id = 1253;
        salary = 25000;
        cout << "\nSalesperson name: " << name << ", Salesperson ID: " << emp_id << ", Salesperson Salary: " << salary << endl;
    }
};

int main() {
    Salesperson sobj;
    Developer dobj;
    Manager mobj;

    return 0;
}

