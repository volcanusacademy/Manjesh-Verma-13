//Create a C++ class BankAccount with a private field balance. Implement public methods for depositing and withdrawing funds while encapsulating the balance field.

#include <iostream>

class BankAccount {
private:
    double balance;

public:
    // Constructor to initialize the balance
    BankAccount(double initialBalance) : balance(initialBalance) {}

    // Method to deposit funds
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited $" << amount << ". New balance: $" << balance << std::endl;
        } else {
            std::cerr << "Error: Deposit amount must be greater than 0." << std::endl;
        }
    }

    // Method to withdraw funds
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawn $" << amount << ". New balance: $" << balance << std::endl;
        } else if (amount > balance) {
            std::cerr << "Error: Insufficient funds. Cannot withdraw $" << amount << "." << std::endl;
        } else {
            std::cerr << "Error: Withdrawal amount must be greater than 0." << std::endl;
        }
    }

    // Method to get the current balance
    double getBalance() const {
        return balance;
    }
};

int main() {
    // Create a BankAccount object with an initial balance of $1000
    BankAccount account(1000.0);

    // Deposit $500
    account.deposit(500.0);

    // Withdraw $200
    account.withdraw(200.0);

    // Withdraw an invalid amount
    account.withdraw(-100.0);

    // Withdraw more than the current balance
    account.withdraw(2000.0);

    // Display the current balance
    std::cout << "Current balance: $" << account.getBalance() << std::endl;

    return 0;
}