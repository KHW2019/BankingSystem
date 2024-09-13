#include "../Bank/Bank.h"                
#include "../Account/Account.h"          
#include "../Feature/AccountManagement/AccountManagement.h"  
#include "../Feature/TransactionProcessing/TransactionProcessing.h"  
#include "../Feature/ReportGeneration/ReportGeneration.h"  
#include <iostream>
#include <limits>

using namespace std;

int main() {
    Bank bank;
    int choice;

    while (true) {
        cout << "1. Create Account\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. View All Accounts\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";

        if (!(cin >> choice)) {
            cin.clear();  // Clear the error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Discard invalid input
            cout << "Invalid input. Please enter a valid number.\n";
            continue;
        }

        switch (choice) {
            case 1:
                handleAccountCreation(bank);
                break;
            case 2:
                handleDeposit(bank);
                break;
            case 3:
                handleWithdrawal(bank);
                break;
            case 4:
                generateAccountReport(bank);
                break;
            case 5:
                return 0;  // Exit the program
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the newline character
    }

    return 0;
}
