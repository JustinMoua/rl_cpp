#include <iostream>
#include <cstring>
#include "person.h"
Person::Person(const std::string &ln, const char *fn){
    lname = ln; //Exact "value" (or string that is represented) of ln.
    // this->fname[0] = *fn; //This should be the exact value of what fn is
    strcpy(fname, fn);
}

void Person::Show() const{
    std::cout << fname << " "<< lname << std::endl;
};

void Person::FormalShow() const{
    std::cout << lname << ", " << fname << std::endl;
};