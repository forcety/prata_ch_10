#include "bankaccount.h"
#include <iostream>

BankAccount::BankAccount()
{
    std::cout << "Default constructor called\n" ;
    name = "no name";
    number = "0000";
    balance = 0.0;
}

BankAccount::BankAccount(const std::string & nm, const std::string & nmbr, double bl)
{
    name = nm;
    number = nmbr;
    balance = bl;

    if (bl < 0)
    {
        std::cout << "balance can't be negative; "
                  << name << " balance set to 0.\n";
        balance = 0.0;
    }
    else
    {
        balance = bl;
    }
}

BankAccount::~BankAccount()
{
    std::cout << "Bye, " << name << " ! \n";
}

void BankAccount::show() const
{
    std::cout << "name:" << name << "\n" <<
                 "number:" << number << "\n" <<
                 "balance:" << balance << "\n";
}

void BankAccount::addMoney(double val)
{
    if (val < 0)
    {
        std::cout << "Value for adding money can't be negative"
                  << "Transaction is aborted.\n";
    }
    else
    {
        balance += val;
    }
}
