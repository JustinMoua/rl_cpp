#include <iostream>
#include "stack.h"

int main(){

    Stack s1;
    Stack s2;

    s1.push(123);
    s1.push(145);
    s1.push(167);
    Stack s3 = s1;

    s2.push(234);
    s2.push(256);
    s2.push(278);
    
    Item value; //Creates a unsigned long variable called value. This will allow us to see
                //what value was popped out. This is possible given that value has been
                //passed into our .pop() function. in .pop(), it stores the top
                //value that is being popped into value. And that is why we can see what value it is!
    while (s1.pop(value)){
        std::cout << "s1 Popped: " << value << std::endl;
    }
    std::cout << std::endl;

    while (s2.pop(value)){
        std::cout << "s2 Popped: " << value << std::endl;
    }
    std::cout << std::endl;

    while (s3.pop(value)){
        std::cout << "s3 Popped: " << value << std::endl;
    }
    std::cout << std::endl;


    Stack s4(3);
    if (s4.isempty())
        std::cout << "s4 is empty!" << std::endl;
    else
        std::cout << "s4 is not empty!" << std::endl;
    
    s4.push(412);
    s4.push(434);
    s4.push(456);
    s4.push(478);
    
    Stack s5;
    s5.push(500);
    s5.push(512);

    s5 = s4;
    
    while (s4.pop(value)){
        std::cout << "s4 Popped: " << value << std::endl;
    }
    std::cout << std::endl;

    while (s5.pop(value)){
        std::cout << "s5 Popped: " << value << std::endl;
    }
    std::cout << std::endl;

    return 0;
}