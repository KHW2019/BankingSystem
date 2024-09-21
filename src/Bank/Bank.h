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
    void createAccount(const int& accNum, const string& name, double initialBalance);

    // Find account by account number
    Account* findAccount(const int& accNum);

    // Display account information
    void displayAccounts() const;
};

#endif
