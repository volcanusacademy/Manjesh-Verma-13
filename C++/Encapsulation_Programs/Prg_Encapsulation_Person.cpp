//Create a C++ class Person with private attributes for name and age. Provide public methods to set and get these attributes.

#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    // Constructor to initialize name and age
    Person(const std::string& n, int a) : name(n), age(a) {}

    // Setter method for name
    void setName(const std::string& n) {
        name = n;
    }

    // Getter method for name
    std::string getName() const {
        return name;
    }

    // Setter method for age
    void setAge(int a) {
        age = a;
    }

    // Getter method for age
    int getAge() const {
        return age;
    }
};

int main() {
    // Create a Person object
    Person person("John Doe", 30);

    // Access and display attributes
    std::cout << "Name: " << person.getName() << std::endl;
    std::cout << "Age: " << person.getAge() << std::endl;

    // Modify attributes using setter methods
    person.setName("Jane Smith");
    person.setAge(25);

    // Display updated attributes
    std::cout << "Updated Name: " << person.getName() << std::endl;
    std::cout << "Updated Age: " << person.getAge() << std::endl;

    return 0;
}
