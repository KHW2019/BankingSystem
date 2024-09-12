#include "Account.h"
#include <iostream>

// Constructor
Account::Account(std::string accNum, std::string name, double initialBalance) 
    : accountNumber(accNum), accountHolderName(name), balance(initialBalance) {}

// Get account number
std::string Account::getAccountNumber() const {
    return accountNumber;
}

// Get account holder name
std::string Account::getAccountHolderName() const {
    return accountHolderName;
}

// Get balance
double Account::getBalance() const {
    return balance;
}

// Deposit money
void Account::deposit(double amount) {
    balance += amount;
}

// Withdraw money
bool Account::withdraw(double amount) {
    if (amount > balance) {
        std::cout << "Insufficient balance!" << std::endl;
        return false;
    }
    balance -= amount;
    return true;
}
