//A redone version of ch10pe1 because I had been working on another project for awhile.
#include <iostream>
#include "bankacc.h"
#include <string>

int main(){
    std::string strName;
    double initialBalance;
    std::cout << "Enter account holder's name: ";
    std::getline(std::cin, strName);

    std::cout << "Enter initial balance: ";
    std::cin >> initialBalance;
    
    BankAccount account(strName, initialBalance);
    account.Display();

    double depositAmount;
    std::cout << "Enter amount to deposit: ";
    std::cin >> depositAmount;
    account.Deposit(depositAmount);

    double withdrawAmount;
    std::cout << "Enter amount to withdraw: ";
    std::cin >> withdrawAmount;
    account.Withdraw(withdrawAmount);
    account.Display();

    return 0;
}