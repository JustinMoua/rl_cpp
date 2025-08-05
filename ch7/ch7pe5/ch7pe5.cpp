#include <iostream>

int intFnFactorial(int intUsrInp);

int main(){
    int intUsrInp;
    std::cout << "Enter a number: ";
    std::cin >> intUsrInp;
    std::cout << intUsrInp << "! = " << intFnFactorial(intUsrInp);

    return 0;
}

int intFnFactorial(int intUsrInp){
    if (intUsrInp > 0){
        return intUsrInp * intFnFactorial(intUsrInp - 1);
    }
    else if (intUsrInp == 0){
        return 1;
    }
}