#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

using namespace std;

class Account {
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    // Constructor
    Account(int accNum, string name, double initialBalance);

    // Getter methods
    int getAccountNumber() const;
    string getAccountHolderName() const;
    double getBalance() const;

    // Account operations
    void deposit(double amount);
    bool withdraw(double amount);  
};

#endif
