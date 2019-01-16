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

/**
 *  存款 
 */
void Brass::Deposit(double amt)
{
    if (amt < 0)
        cout << "Neqative deposit not allowed: "
            << "deposit is cancelled.\n";
    else 
        balance += amt;
}

/**
 *  取钱 
 */
void Brass::Withdraw(double amt)
{
    if (amt < 0)
        cout << "Withdrawal amount must be positive: "
            << "withdrawal canceled.\n";
    else if (amt <= balance)
        balance -= amt;
    else 
        cout << "Withdrawal amount of $" << amt
            << " exceeds your balance.\n"
            << "Withdrawal canceled.\n";           
}

/**
 *  账户余额
 */
double Brass::Balance() const 
{
    return balance;
}

void Brass::ViewAcct() const
{
    // set up ###.## format
    ios_base::fmtflags initialState =
        cout.setf(ios_base::fixed, ios_base::floatfield);
    cout.setf(ios_base::showpoint);
    cout.precision(2);
    cout << "Client: " << fullName << endl;
    cout << "Account Number: " << acctNum << endl;
    cout << "Balance: $" << balance << endl;
    cout.setf(initialState); // restore original format
}

// BrassPlusMethods
BrassPlus::BrassPlus(const char *s, long an, double bal,
        double ml, double r) : Brass(s, an, bal)
{
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}

// redefine how ViewAcct() works
void BrassPlus::ViewAcct() const
{
    // set up ###.## format
    ios_base::fmtflags initialState =
        cout.setf(ios_base::fixed, ios_base::floatfield);
    cout.setf(ios_base::showpoint);
    cout.precision(2);

    Brass::ViewAcct();  // display baes portion
    cout << "Maximum loan: $" << maxLoan << endl;
    cout << "Owed to bank: $" << owesBank << endl;
    cout << "Loan Rate: " << 100 * rate << "%\n";
    cout.setf(initialState);
}

// redefine how Withdraw() works
void BrassPlus::Withdraw(double amt)
{
    // set up ###.## format
    ios_base::fmtflags initialState =
        cout.setf(ios_base::fixed, ios_base::floatfield);
    cout.setf(ios_base::showpoint);
    cout.precision(2);

    double bal = Balance();
    if (amt <= bal)
        Brass::Withdraw(amt);
    else if (amt <= bal + maxLoan - owesBank)
    {
        double advance = amt - bal;  // 计算透支的钱
        owesBank += advance * (1.0 + rate); // 增加透支的钱
        cout << "Bank advance: $" << advance << endl;
        cout << "Finance charge: $" << advance * rate << endl;
        Deposit(advance);       // 存入透支的钱
        Brass::Withdraw(amt);   // 取款
    }    
    else 
        cout << "Credit limit exceeded. Transaction calcelled.n\n";

    cout.setf(initialState);    
}
