#ifndef BANK_H
#define BANK_H

#include <vector>
#include "Account.h"

class Bank {
private:
    std::vector<Account> accounts;

public:
    // Add a new account
    void createAccount(const std::string& accNum, const std::string& name, double initialBalance);

    // Find account by account number
    Account* findAccount(const std::string& accNum);

    // Display account information
    void displayAccounts() const;
};

#endif
