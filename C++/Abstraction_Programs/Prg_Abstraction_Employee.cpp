//Employee Payroll Abstraction: Create a C++ program that models an employee payroll system. Define an Employee class with attributes like name, ID, and salary. Abstract the calculation of bonuses and display employee details.
//Private name. ID, salary

#include <iostream>

class BankAccount {
private:
    double balance; // Private member to store the bank balance

public:
    // Constructor to initialize the balance
    BankAccount(double initialBalance) {
        balance = initialBalance;
    }

    // Method to deposit money into the account
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited $" << amount << " into the account." << std::endl;
        } else {
            std::cout << "Invalid deposit amount." << std::endl;
        }
    }

    // Method to withdraw money from the account
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawn $" << amount << " from the account." << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount or insufficient funds." << std::endl;
        }
    }

    // Method to check the account balance
    double checkBalance() const {
        return balance;
    }
};

int main() {
    // Create a BankAccount object with an initial balance of $1000
    BankAccount account(1000.0);

    // Perform some transactions
    account.deposit(500.0);
    account.withdraw(200.0);

    // Check the account balance
    double currentBalance = account.checkBalance();
    std::cout << "Current Balance: $" << currentBalance << std::endl;

    return 0;
}