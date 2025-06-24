#include "bank_acc_header.h"
#include <iostream>
#include <string>

// No need to define the class since we did that in the header.

// Default constructor
BankAcc::BankAcc(){
    strName_m = "None";
    strAccNum_m = "-1";
    dblBalance_m = 0.00;
}

// Constructor
BankAcc::BankAcc(const std::string &strName, const std::string &strAccNum, double dblBalance){
    strName_m = strName;
    strAccNum_m = strAccNum;
    dblBalance_m = dblBalance;
}

void BankAcc::VdDisplay(){
    std::cout << "Name: " << strName_m << std::endl;
    std::cout << "Account Number: " << strAccNum_m << std::endl;
    std::cout << "Balance: $" << dblBalance_m << std::endl << std::endl;
}

void BankAcc::VdDeposit(double dblMoneyGiven){
    std::cout << "Your current balance is $" << dblBalance_m << "." << std::endl;
    std::cout << "Depositing $" << dblMoneyGiven << std::endl;

    dblBalance_m = dblBalance_m + dblMoneyGiven;
    
    std::cout << "$" << dblMoneyGiven << " has been deposited!" << std::endl;


    std::cout << "Your balance is now $" << dblBalance_m << "." << std::endl << std::endl;
}

void BankAcc::VdWithdraw(double dblMoneyGiven){
    std::cout << "Your current balance is $" << dblBalance_m << "." << std::endl;
    std::cout << "Depositing $" << dblMoneyGiven << std::endl;
    dblBalance_m = dblBalance_m - dblMoneyGiven;
    std::cout << dblMoneyGiven << " has been deposited" << std::endl;
    std::cout << "Your balance is now $" << dblBalance_m << "." << std::endl;
}
