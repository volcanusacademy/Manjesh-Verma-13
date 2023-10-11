//  Vehicle Inheritance: Implement a base class Vehicle with attributes like make, model, and year. Create subclasses (e.g., Car, Bicycle, Motorcycle) that inherit from Vehicle and add properties or methods specific to each type of vehicle.

#include<iostream>
#include<string>
using namespace std;
// Vechicle class 
class Vehicle{
    // variable declaration 
public:
string make ,model;
int year;

};
// car sub class which inherit from Vehicle class
class Car:public Vehicle{
    public:
    // displat function using for car information
void display(string make , string model,int year){
    cout<<"\ninformation about Car :-  ";
    cout<<" "<< make<<" " <<model<<" "<<year;
}
};
class Bicycle:public Vehicle{
    public:
    // displat function using for Bicycle information
void display(string make , string model,int year){
    cout<<"\ninformation about Bicycle:-  ";
    cout<<" "<<make<<" "<< model<<" "<<year;
}
};
class Motorcycle:public Vehicle{
    public:
    // displat function using for Motorcycle information
void display(string make , string model,int year){
    cout<<"\ninformation about Motorcycle:-  ";
    cout<< " " << make<<" " <<model<<" " <<year;
}
};
// main function
int main(){
// object of car class
   Car obj1;
    obj1.display("Toyota", "Camry", 2023);
// object of Bicycle class
    Bicycle obj2;
    obj2.display("Trek", "Mountain Bike", 2023);
// object of motorcycle class
     Motorcycle obj3;
    obj3.display("Honda", "CBRR", 2023);

    



}
