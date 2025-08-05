#include <iostream>
#include <cstring>
#include "golf.h"


Golf::Golf(const char *name, int hc){
    strcpy(fullname, name);
    handicap = hc;
};

void Golf::Handicap(int hc){
    handicap = hc;
};

void Golf::ShowGolf(){
  std::cout << "Full Name: " << fullname << std::endl;
  std::cout << "Handicap: " << handicap << std::endl;  
};

// Golf::Golf(char *fullName, int handicap) {
//     strncpy(fullname_m, fullName, Len_m - 1); //use fullName instead of *fullName since * dereferences the pointer. 
//                                               //We want the address of where the character is of that variable.
//                                               //Then the compiler should be able to go through the character array.
//     handicap_m = handicap;
// };
// void handicap(const char *name, int hc); //resets handicap to new value
// void showgolf(const char *name, int hc); //displays contents