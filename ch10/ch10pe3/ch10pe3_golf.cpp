#include <iostream>
//#include <string> //I thought this library was needed for strcpy but I was wrong.
#include <cstring>
#include "ch10pe3_golf.h"

Golf::Golf(){
    //std::strcpy(fullname_m, "None"); //Does not work
    strncpy(fullname_m, "None", Len_m - 1);
    handicap_m = 0;
};

Golf::Golf(char *fullName, int handicap) {
    strncpy(fullname_m, fullName, Len_m - 1); //use fullName instead of *fullName since * dereferences the pointer. 
                                              //We want the address of where the character is of that variable.
                                              //Then the compiler should be able to go through the character array.
    handicap_m = handicap;
};

void Golf::handicap(int newHandicapValue) {
    handicap_m = newHandicapValue;
};

int Golf::setgolf() {
    char fullname_m[Len_m];
    int handicap_m;

    std::cout << "Enter name: ";
    std::cin.getline(fullname_m, Len_m);

    if (fullname_m[0] == '\0')  // empty string ends input
        return 0;

    std::cout << "Enter handicap: ";
    std::cin >> handicap_m;
    std::cin.ignore(1000, '\n');  // clear newline

    // use constructor to create a temp and assign to *this
    *this = Golf(fullname_m, handicap_m);

    return 1;
}


void Golf::showgolf() {
    std::cout << "Name: " << fullname_m << std::endl;
    std::cout << "Handicap: " << handicap_m << std::endl;
    std::cout << std::endl;
};

// #ifndef GOLF_H
// #define GOLF_H

// class Golf{

// private:
//     static const int Len_m = 40;
//     char fullname_m[Len_m];
//     int handicap_m;

// public:
//     Golf();
//     Golf(char *fullName, int handicap); //This would be the "setgolf" function
//     void handicap(int newHandiCapValue);
//     void showgolf();

// }
// #endif