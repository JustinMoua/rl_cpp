//g++ ch10pe1.cpp bank_acc_class.cpp -o ch10pe1.exe
//.\ch10pe1.exe
#include <iostream>
#include "bank_acc_header.h"
#include <string>

int main(){

    //variable def and initializations.
    std::string strUsrInpName;
    std::string strUsrInpAccNum;
    double dblUsrInpBalance;

    std::cout << "Enter your username: ";
    std::getline(std::cin, strUsrInpName); //https://www.w3schools.com/cpp/cpp_strings_input.asp
    std::cout << "Enter your acc number: ";
    std::getline(std::cin, strUsrInpAccNum);
    std::cout << "Enter your balance: ";
    std::cin >> dblUsrInpBalance;
    std::cout << std::endl;

    //create an object of BankAcc
    //BankAcc ellenJoe(strUsrInpName, strUsrInpAccNum, dblUsrInpBalance);
    // BankAcc new = BankAcc ellenJoe // Wrong
    BankAcc *ellenJoePtr = new BankAcc(strUsrInpName, strUsrInpAccNum, dblUsrInpBalance);

    // BankAcc ellenJoe = BankAcc(strUsrInpName, strUsrInpAccNum, dblUsrInpBalance); //Another way of creating the variable.
    // BankAcc* ellenJoePtr = new BankAcc(strUsrInpName, strUsrInpAccNum, dblUsrInpBalance);

    //Using default constructors
    // BankAcc ellenJoe;
    // ellenJoe.setName(strUsrInpName);
    // ellenJoe.setAccountNumber(strUsrInpAccNum);
    // ellenJoe.setBalance(dblUsrInpBalance);
    
    ellenJoePtr->VdDisplay();
    std::cout << std::endl;

    double dblDepositAmt;
    std::cout << "How much would you like to deposit? Enter here: ";
    std::cin >> dblDepositAmt;
    std::cout << std::endl;
    ellenJoePtr->VdDeposit(dblDepositAmt);

    double dblWithdrawAmt;
    std::cout << "How much would you like to withdraw? Enter here: ";
    std::cin >> dblWithdrawAmt;
    std::cout << std::endl;
    ellenJoePtr->VdWithdraw(dblWithdrawAmt);

    delete ellenJoePtr;

    return 0;
}