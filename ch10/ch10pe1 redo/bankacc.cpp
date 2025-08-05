//implementation file
#include "bankacc.h"
#include <iostream>

BankAccount::BankAccount(const std::string &name, double initialBalance){
    this->name = name;
    this->balance = initialBalance;
}

void BankAccount::Display(){
    std::cout << this->name << "'s balance is $" << this->balance << std::endl;
}

void BankAccount::Deposit(double amount){
    if (amount > 0){
        this->balance += amount;
        std::cout << "Deposited $" << amount << ". New balance is $" << this->balance << std::endl;
    } else {
        std::cout << "Deposit amount must be positive." << std::endl;
    }
}
void BankAccount::Withdraw(double amount){
    if (amount > 0 && amount <= this->balance){
        this->balance -= amount;
        std::cout << "Withdrew $" << amount << ". New balance is $" << this->balance << std::endl;
    }
    else if (amount > this->balance) {
        std::cout << "Insufficient funds for withdrawal." << std::endl;
    } else {
        std::cout << "Withdrawal amount must be positive." << std::endl;
    }
}