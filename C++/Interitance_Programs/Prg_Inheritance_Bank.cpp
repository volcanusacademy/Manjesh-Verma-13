//Bank Account Inheritance: Implement a base class BankAccount with properties like accountNumber, balance, and methods like deposit() and withdraw(). Create subclasses (e.g., SavingsAccount, CheckingAccount) that inherit from BankAccount and add methods or properties specific to each account type.
#include <iostream>
using namespace std;

class BankAccount {
public:
    int balance;
    int accountNumber;

    // Constructor to initialize accountNumber and balance
    BankAccount(int accountNumber, int initialBalance) : accountNumber(accountNumber), balance(initialBalance) {}

    // Function to deposit money into the account
    void deposit(int amount) {
        balance += amount;
        cout << "Deposited: " << amount << ", New Balance: " << balance << endl;
    }

    // Function to withdraw money from the account
    void withdraw(int amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawn: " << amount << ", New Balance: " << balance << endl;
        } else {
            cout << "Insufficient funds. Withdrawal not allowed." << endl;
        }
    }
};

class SavingsAccount : public BankAccount {
public:
    SavingsAccount(int accountNumber, int initialBalance) : BankAccount(accountNumber, initialBalance) {}

    // Add a specific method for savings account
    void applyInterest(float interestRate) {
        balance += static_cast<int>(balance * interestRate);
        cout << "Interest applied. New Balance: " << balance << endl;
    }
};

class CheckingAccount : public BankAccount {
public:
    CheckingAccount(int accountNumber, int initialBalance) : BankAccount(accountNumber, initialBalance) {}

    // Add a specific method for checking account
    void deductServiceCharge(int charge) {
        balance -= charge;
        cout << "Service charge deducted. New Balance: " << balance << endl;
    }
};

int main() {
    SavingsAccount savings(1001, 5000);
    CheckingAccount checking(2001, 3000);

    savings.deposit(1000);
    savings.applyInterest(0.05); // Apply 5% interest
    savings.withdraw(200);

    checking.deposit(500);
    checking.deductServiceCharge(10); // Deduct service charge
    checking.withdraw(100);

    return 0;
}

