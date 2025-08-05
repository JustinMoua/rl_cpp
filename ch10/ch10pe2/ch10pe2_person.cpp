#include <iostream>
// #include <string> //I thought this'd work for using strcpy but it does not. 
#include <cstring> //this will work for using strcpy.
#include "ch10pe2_person.h"
// Heyyou is a deafult value.
Person::Person(const std::string &ln, const char *fn){
    lname = ln;
    strcpy(fname, fn);


    //This could be a better way
    // lname = ln;
    // std::strncpy(fname, fn, LIMIT - 1);  // copy at most LIMIT - 1 characters
    // fname[LIMIT - 1] = '\0';             // ensure null termination
};

void Person::Show() const{
    std::cout << fname << " "<< lname << std::endl;
};

void Person::FormalShow() const{
    std::cout << lname << ", " << fname << std::endl;
};