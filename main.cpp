#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include "bankaccount.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "Program started." << endl;

    {
        BankAccount ba1;
        //BankAccount first = BankAccount();
        BankAccount ba2 = BankAccount("Ivanov", "0001", 1000.0);

        ba2.addMoney(500.0);
        ba2.show();

        std::cout << "Done\n";

    }
    qDebug() << "Main done." << endl;
    
    return a.exec();
}
