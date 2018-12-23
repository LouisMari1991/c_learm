// brass.cpp -- bank account class methods

#include <iostream>
#include <cstring>
#include "brass.h"

using std::cout;
using std::ios_base;
using std::endl;

// Brass methods
Brass::Brass(const char *s, long an, double bal)
{
    std::strncpy(fullName, s, MAX - 1);
    fullName[MAX - 1] = '\0';
    acctNum = an;
    balance = bal;
}

void Brass::Deposit(double amt)
{
    if (amt < 0)
        cout << "Neqative deposit not allowed: "
            << "deposit is cancelled.\n";
    else 
        balance += amt;
}

void Brass::Withdraw(double amt)
{
    if (amt < 0)
        cout << "";
    else 
        cout << "";
}