#include <iostream>
#include "move.h"

int main(){

    Move m1(2.5, 2.0);
    Move m2(1.45, 5.34);

    m1.showmove();
    std::cout << std::endl;
    
    m2.showmove();
    std::cout << std::endl;
    

    Move m3 = m1.add(m3);

    m3.showmove();
    std::cout << std::endl;
    

    m3.reset();
    m3.showmove();
    std::cout << std::endl;
    


    return 0;
}