#ifndef BANKACC_H_ //This is an include/header/macro guard. Prevents double inclusion of header files. Need to stick to One Definition Rule.
#define BANKACC_H_
#include <string>

class BankAcc{

private:
    std::string strName_m;
    std::string strAccNum_m;
    double dblBalance_m;

public:
    BankAcc();
    // BankAcc::BankAcc(std::string strName, std::string strAccNum, double dblBalance); //We do not want this to avoid unnecessary copying!
                                                                                        //Also, does not need BankAcc:: because this is not the implementation file.
    BankAcc(const std::string &strName, const std::string &strAccNum, double dblBalance);
    void VdDisplay();
    void VdDeposit(double dblMoneyGiven);
    void VdWithdraw(double dblMoneyGiven);
};

#endif