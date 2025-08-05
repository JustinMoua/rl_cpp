#include <iostream>
#include "stack.h"

int main(){ //page 560
    
    double dbl_runningtot = 0;
    Stack stackObject; 

    std::cout << stackObject.isfull() << std::endl;
    std::cout << stackObject.isempty() << std::endl;
    
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

    std::cout << stackObject.isfull() << std::endl;
    std::cout << stackObject.isempty() << std::endl;

    for (int i = 0; i < 10; i++)
        dbl_runningtot += stackObject.pop();

    std::cout << "Running Total: " << dbl_runningtot << std::endl;

    return 0;
}