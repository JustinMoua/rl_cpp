#include "plorg.h"
#include <iostream>
#include <cstring>

Plorg::Plorg(){
    // this->name_m = 'Plorga';
    std::strcpy(this->name_m, "Plorga");
    this->ci_m = 50;
};

// Plorg::Plorg(char name, int ci){
//     // this->name_m = name;
//     std::strcpy(name_m, name);
//     this->ci_m = ci;
// }

Plorg::Plorg(const char *name, int ci){
    std::strcpy(this->name_m, name);
    this->ci_m = ci;
};

void Plorg::setCI(int ci){
    this->ci_m = ci;
};

void Plorg::report(){
    std::cout << "My name is " << this->name_m <<  " and my contentment index is " << this->ci_m << std::endl;
};