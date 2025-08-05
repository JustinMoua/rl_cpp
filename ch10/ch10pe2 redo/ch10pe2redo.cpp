#include <iostream>
#include <string>
#include "person.h"
//g++ <MAIN FILE NAME>.cpp <IMPLEMENTATION FILE (add more if needed)>.cpp -o <NAME OF FILE YOU WANT TO RUN>.exe

int main(){
    // std::string strFnameInput;
    // std::string strLnameInput;

    // std::cout << "Enter FIRST NAME: ";
    // std::getline(std::cin, strFnameInput);
    
    // std::cout << "Enter LAST NAME: ";
    // std::getline(std::cin, strLnameInput);

    // std::cout << "First Name is: " << strFnameInput << std::endl;
    // std::cout << "Last Name is: " << strLnameInput << std::endl;

    // Person *personPtr = new Person(strFnameInput, strLnameInput);
    // Person test(strFnameInput, strLnameInput);

    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy", "Sam");
    one.Show();
    std::cout << std::endl;
    one.FormalShow();
    two.Show();
    std::cout << std::endl;
    two.FormalShow();
    three.Show();
    std::cout << std::endl;
    three.FormalShow();

    return 0;
}