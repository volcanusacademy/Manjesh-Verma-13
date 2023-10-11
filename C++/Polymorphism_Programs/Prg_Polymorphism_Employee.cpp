//Employee Polymorphism:
//Define an Employee class with a method calculateSalary(). Create subclasses for different types of employees (e.g., Full_Time_Employee, Part_Time_Employee, Intern) and demonstrate how polymorphism can be used to calculate salaries differently for each type of employee.

#include <iostream>

// Base class Animal
class Animal {
public:
    virtual void makeSound() {
        std::cout << "Some generic animal sound" << std::endl;
    }
};

// Derived class Dog
class Dog : public Animal {
public:
    void makeSound() override {
        std::cout << "Woof! Woof!" << std::endl;
    }
};

// Derived class Cat
class Cat : public Animal {
public:
    void makeSound() override {
        std::cout << "Meow! Meow!" << std::endl;
    }
};

// Derived class Bird
class Bird : public Animal {
public:
    void makeSound() override {
        std::cout << "Chirp! Chirp!" << std::endl;
    }
};

int main() {
    // Create objects of each animal
    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();
    Animal* animal3 = new Bird();

    // Demonstrate polymorphism by calling makeSound() on each object
    animal1->makeSound(); // Dog sound
    animal2->makeSound(); // Cat sound
    animal3->makeSound(); // Bird sound

    // Don't forget to free the memory allocated for the objects
    delete animal1;
    delete animal2;
    delete animal3;

    return 0;
}