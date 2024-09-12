#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account {
private:
    std::string accountNumber;
    std::string accountHolderName;
    double balance;

public:
    // Constructor
    Account(std::string accNum, std::string name, double initialBalance);

    // Getter methods
    std::string getAccountNumber() const;
    std::string getAccountHolderName() const;
    double getBalance() const;

    // Account operations
    void deposit(double amount);
    bool withdraw(double amount);  // Return false if insufficient balance
};

#endif
