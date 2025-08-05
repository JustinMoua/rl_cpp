#include <iostream>

std::string threeBlindMice();
std::string seeHowTheyRun();

int main(){

    std::cout << threeBlindMice() << std::endl;
    std::cout << threeBlindMice() << std::endl;
    std::cout << seeHowTheyRun() << std::endl;
    std::cout << seeHowTheyRun() << std::endl;
    std::cout << "Finished!" << std::endl;
    return 0;
}

std::string threeBlindMice(){
    return "Three blind mice";
}

std::string seeHowTheyRun(){
    return "See how they run";
}