#ifndef BANKACC_H_ //This is an include/header/macro guard. Prevents double inclusion of header files. Need to stick to One Definition Rule.
#define BANKACC_H_
#include <string>

class BankAccount{
    std::string name;
    double balance;
public:
    BankAccount(const std::string &name, double initialBalance); // Constructor
    void Display();
    void Deposit(double amount);
    void Withdraw(double amount);
};

#endif