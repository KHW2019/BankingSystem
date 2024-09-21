#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

using namespace std;

class Account {
private:
    string accountNumber;
    string accountHolderName;
    double balance;

public:
    // Constructor
    Account(string accNum, string name, double initialBalance);

    // Getter methods
    string getAccountNumber() const;
    string getAccountHolderName() const;
    double getBalance() const;

    // Account operations
    void deposit(double amount);
    bool withdraw(double amount);  
};

#endif
