#include "Bank.h"
#include <iostream>

using namespace std;

// Add a new account
void Bank::createAccount(const int& accNum, const string& name, double initialBalance) {
    accounts.push_back(Account(accNum, name, initialBalance));
}

// Find account by account number
Account* Bank::findAccount(const int& accNum) {
    for (auto& account : accounts) {
        if (account.getAccountNumber() == accNum) {
            return &account;
        }
    }
    return nullptr;
}

// Display all accounts
void Bank::displayAccounts() const {
    for (const auto& account : accounts) {
        cout << "Account Number: " << account.getAccountNumber() << "\n"
                  << "Account Holder: " << account.getAccountHolderName() << "\n"
                  << "Balance: " << account.getBalance() << "\n" << endl;
    }
}
