#include "AccountManagement.h"
#include <iostream>
#include <limits>
#include <cctype>

using namespace std;

bool isValidAccountNumber(const string &accNum)
{
    if (accNum.length() != 6)
    {
        return false;
    }
    for (char c : accNum)
    {
        if (!isdigit(c))
        {
            return false;
        }
    }

    return true;
}

void handleAccountCreation(Bank &bank)
{
    string accNum, name;
    double initialBalance;

    cout << "Enter account number (6-digit number): ";
    cin >> accNum;

    if (!isValidAccountNumber(accNum))
    {
        cout << "Invalid account number. It must be a 6-digit number.\n";
        return;
    }

    cout << "Enter account holder name: ";
    cin >> name;
    cout << "Enter initial balance: ";

    while (!(cin >> initialBalance))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "invalid balance.Please enter a valid number: ";
    }

    bank.createAccount(accNum, name, initialBalance);
    cout << "Account created successfully!\n";
}

void handleViewAccount(Bank &bank)
{
    bank.displayAccounts();
}
