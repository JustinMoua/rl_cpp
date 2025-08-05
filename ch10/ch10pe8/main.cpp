#include <iostream>
#include "list.h"
#include <cstring>


void setPaymentToZero(Item &item);

int main(){ //page 560
    
    double dbl_runningtot = 0;
    Stack stackObject; 

    if (stackObject.isfull()){
        std::cout << "Full." << std::endl;
    }else if(stackObject.isempty()){
        std::cout << "Empty." << std::endl;
    }
    std::cout << std::endl;
    
    stackObject.push({"Justin", 12.50});
    stackObject.push({"Carl", 13.25});
    stackObject.push({"Alyssa", 34.29});
    stackObject.push({"Zexon", 48.90});
    stackObject.push({"Bobby", 9.65});
    stackObject.push({"Rex", 34.29});
    stackObject.push({"Charles", 11.29});
    stackObject.push({"Freddy", 23.87});
    stackObject.push({"Linda", 1.56});
    stackObject.push({"Elles", 35.2});

    stackObject.visit(setPaymentToZero);

    if (stackObject.isfull()){
        std::cout << "Full." << std::endl;
    }else if(stackObject.isempty()){
        std::cout << "Empty." << std::endl;
    }
    std::cout << std::endl;

    for (int i = 0; i < 10; i++){
        dbl_runningtot += stackObject.pop();
    };

    std::cout << "Running Total: " << dbl_runningtot << std::endl;

    return 0;
}

void setPaymentToZero(Item &item){
    item.payment = 0.00;
    // std::cout << "it.payment is: " << it.payment << std::endl;
};