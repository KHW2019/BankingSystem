#include "AccountManagement.h"

#include <iostream>
#include <string>
#include <algorithm>
#include <limits>
#include <cctype>

using namespace std;

bool isValidAccountNumber(const int &accNum)
{
    return accNum >= 100000 && accNum <= 999999;
}

bool isValidName(const string &name)
{
    return all_of(name.begin(), name.end(), [](char c)
                  { return isalpha(c); });
}

bool isValidBalance(const double &balance)
{
    return balance > 0;
}

void handleAccountCreation(Bank &bank)
{
    int accNum;
    string name;
    double initialBalance;

    do
    {
        cout << "Enter account number (6-digit number): ";
        cin >> accNum;

        if (cin.fail())
        {
            cin.clear();                                      
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Invalid input. Please enter a valid integer.\n";
            continue; 
        }

        if (!isValidAccountNumber(accNum))
        {
            cout << "Invalid account number. It must be a 6-digit number.\n";
        }
        
    } while (!isValidAccountNumber(accNum));

    do
    {
        cout << "Enter account holder name: ";
        cin >> name;
        if (!isValidName(name))
        {
            cout << "Your input Characters can't be numbers or symbols.\n";
        }

    } while (!isValidName(name));

    do
    {
        cout << "Enter initial balance: ";
        cin >> initialBalance;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input! Please enter a valid number." << endl;
        }
        else if (!isValidBalance(initialBalance))
        {
            cout << "Your balance must be a positive number. Please enter again." << endl;
        }
    } while (!isValidBalance(initialBalance));

    bank.createAccount(accNum, name, initialBalance);
    cout << "Account created successfully!\n";
}

void handleViewAccount(Bank &bank)
{
    bank.displayAccounts();
}
