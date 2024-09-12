#include <iostream>
#include "Bank.h"

int main() {
    Bank bank;
    int choice;

    while (true) {
        std::cout << "1. Create Account\n";
        std::cout << "2. Deposit\n";
        std::cout << "3. Withdraw\n";
        std::cout << "4. View All Accounts\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 1) {
            std::string accNum, name;
            double initialBalance;

            std::cout << "Enter account number: ";
            std::cin >> accNum;
            std::cout << "Enter account holder name: ";
            std::cin >> name;
            std::cout << "Enter initial balance: ";
            std::cin >> initialBalance;

            bank.createAccount(accNum, name, initialBalance);
            std::cout << "Account created successfully!\n";

        } else if (choice == 2) {
            std::string accNum;
            double amount;
            
            std::cout << "Enter account number: ";
            std::cin >> accNum;
            std::cout << "Enter amount to deposit: ";
            std::cin >> amount;

            Account* account = bank.findAccount(accNum);
            if (account) {
                account->deposit(amount);
                std::cout << "Deposit successful!\n";
            } else {
                std::cout << "Account not found!\n";
            }

        } else if (choice == 3) {
            std::string accNum;
            double amount;
            
            std::cout << "Enter account number: ";
            std::cin >> accNum;
            std::cout << "Enter amount to withdraw: ";
            std::cin >> amount;

            Account* account = bank.findAccount(accNum);
            if (account) {
                if (account->withdraw(amount)) {
                    std::cout << "Withdrawal successful!\n";
                }
            } else {
                std::cout << "Account not found!\n";
            }

        } else if (choice == 4) {
            bank.displayAccounts();

        } else if (choice == 5) {
            break;
        } else {
            std::cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
