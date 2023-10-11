//Design a C++ class Car with private attributes for make, model, and year. Create public methods to set and get these attributes.


#include <iostream>
#include <string>

class Car {
private:
    std::string make;
    std::string model;
    int year;

public:
    // Constructor to initialize make, model, and year
    Car(const std::string& carMake, const std::string& carModel, int carYear)
        : make(carMake), model(carModel), year(carYear) {}

    // Setter method for make
    void setMake(const std::string& carMake) {
        make = carMake;
    }

    // Getter method for make
    std::string getMake() const {
        return make;
    }

    // Setter method for model
    void setModel(const std::string& carModel) {
        model = carModel;
    }

    // Getter method for model
    std::string getModel() const {
        return model;
    }

    // Setter method for year
    void setYear(int carYear) {
        year = carYear;
    }

    // Getter method for year
    int getYear() const {
        return year;
    }
};

int main() {
    // Create a Car object
    Car myCar("Toyota", "Camry", 2022);

    // Access and display attributes
    std::cout << "Make: " << myCar.getMake() << std::endl;
    std::cout << "Model: " << myCar.getModel() << std::endl;
    std::cout << "Year: " << myCar.getYear() << std::endl;

    // Modify attributes using setter methods
    myCar.setMake("Honda");
    myCar.setModel("Civic");
    myCar.setYear(2023);

    // Display updated attributes
    std::cout << "Updated Make: " << myCar.getMake() << std::endl;
    std::cout << "Updated Model: " << myCar.getModel() << std::endl;
    std::cout << "Updated Year: " << myCar.getYear() << std::endl;

    return 0;
}