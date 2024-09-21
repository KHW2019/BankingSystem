#include "Account.h"
#include <iostream>

using namespace std;

// Constructor
Account::Account(int accNum, string name, double initialBalance) 
    : accountNumber(accNum), accountHolderName(name), balance(initialBalance) {}

// Get account number
int Account::getAccountNumber() const {
    return accountNumber;
}

// Get account holder name
string Account::getAccountHolderName() const {
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
        cout << "Insufficient balance!" << endl;
        return false;
    }
    balance -= amount;
    return true;
}
