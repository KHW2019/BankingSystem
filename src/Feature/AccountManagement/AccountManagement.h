#ifndef ACCOUNT_MANAGEMENT_H
#define ACCOUNT_MANAGEMENT_H

#include "../Bank/Bank.h"

bool isValidAccountNumber(const int &accNum);

bool isValidName(const string &name);

bool isValidBalance(const double &balance);

void handleAccountCreation(Bank& bank);

void ViewYourAccount(Bank& bank);

#endif