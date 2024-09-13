#include "TransactionProcessing.h"
#include <iostream>
#include <limits>

using namespace std;

void handleDeposit(Bank& bank) {
    string accNum;
    double amount;

    cout << "Enter account number: ";
    cin >> accNum;
    cout << "Enter amount to deposit: ";

    while (!(cin >> amount)) {
        cin.clear();  // Clear error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore bad input
        cout << "Invalid amount. Please enter a valid number: ";
    }

    Account* account = bank.findAccount(accNum);
    if (account) {
        account->deposit(amount);
        cout << "Deposit successful!\n";
    } else {
        cout << "Account not found!\n";
    }
}

void handleWithdrawal(Bank& bank) {
    string accNum;
    double amount;

    cout << "Enter account number: ";
    cin >> accNum;
    cout << "Enter amount to withdraw: ";

    while (!(cin >> amount)) {
        cin.clear();  // Clear error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore bad input
        cout << "Invalid amount. Please enter a valid number: ";
    }

    Account* account = bank.findAccount(accNum);
    if (account) {
        if (account->withdraw(amount)) {
            cout << "Withdrawal successful!\n";
        } else {
            cout << "Insufficient balance!\n";
        }
    } else {
        cout << "Account not found!\n";
    }
}
