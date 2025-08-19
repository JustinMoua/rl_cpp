#include "classic.h"
#include <cstring>
#include <iostream>
Classic::Classic() : Cd(){
    strncpy(primaryWork, "None", 49);
    primaryWork[49] = '\0';
}

// Classic(char *primaryWork) : Cd(char *s1, char *s2, int n, double x);
Classic::Classic(const char *pw, const char *s1, const char *s2, int n, double x)
    : Cd(s1, s2, n, x) {// calls base class constructor
        strncpy(primaryWork, pw, 49);
        primaryWork[49] = '\0';
}

Classic::Classic(const Classic &d) : Cd(d){
    strncpy(primaryWork, d.primaryWork, 49);
    primaryWork[49] = '\0';
}

Classic::~Classic(){
    std::cout << "Derived destructor called. " << std::endl;
}

void Classic::Report() const{
    Cd::Report();
    std::cout << "Primary work: " << primaryWork << std::endl;
}

Classic & Classic::operator=(const Classic &d){
    if (this == &d)
        return *this;
    
    Cd::operator=(d);
    
    strncpy(primaryWork, d.primaryWork, 49);
    primaryWork[49] = '\0';
    return *this;
}