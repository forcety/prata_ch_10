#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <string>

class BankAccount
{
private:
    std::string name;
    std::string number;
    double balance;

 public:
    BankAccount();  // конструктор по умолчанию
    BankAccount(const std::string & nm, const std::string & nmbr, double bl = 0.0);
    ~BankAccount();
    void show() const;
    void addMoney(double val);
    void subMoney(double val);
};

#endif // BANKACCOUNT_H
