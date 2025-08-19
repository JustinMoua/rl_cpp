#include "classic.h"
#include <cstring>
#include <iostream>
Classic::Classic() : Cd(){
    primaryWork = nullptr;
}

// Classic(char *primaryWork) : Cd(char *s1, char *s2, int n, double x);
Classic::Classic(const char *pw, const char *s1, const char *s2, int n, double x)
    : Cd(s1, s2, n, x) {// calls base class constructor
        primaryWork = new char[strlen(pw) + 1];
        strcpy(primaryWork, pw);
}

Classic::Classic(const Classic &d) : Cd(d){
    primaryWork = new char[strlen(d.primaryWork) + 1];
    strcpy(primaryWork, d.primaryWork);
}

Classic::~Classic(){
    std::cout << "Derived destructor called. " << std::endl;
    delete [] primaryWork;
}

void Classic::Report() const{
    Cd::Report();
    std::cout << "Primary work: " << primaryWork << std::endl;
}

Classic & Classic::operator=(const Classic &d){
    if (this == &d)
        return *this;
    
    Cd::operator=(d);
    
    delete [] primaryWork;
    primaryWork = new char[strlen(d.primaryWork) + 1];
    strcpy(primaryWork, d.primaryWork);
    return *this;
}