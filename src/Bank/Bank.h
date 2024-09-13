#ifndef BANK_H
#define BANK_H

#include <vector>
#include "Account.h"

using namespace std;

class Bank {
private:
    vector<Account> accounts;

public:
    // Add a new account
    void createAccount(const string& accNum, const string& name, double initialBalance);

    // Find account by account number
    Account* findAccount(const string& accNum);

    // Display account information
    void displayAccounts() const;
};

#endif
