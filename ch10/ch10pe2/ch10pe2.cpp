//g++ ch10pe2.cpp bank_acc_class.cpp -o ch10pe1.exe
//.\ch10pe1.exe

//g++ <NAME OF FILE W/MAIN> <NAME OF FILE W/IMPLEMENTATION> -o <NAME THAT I WANT FOR .EXE>
//.\<NAME THAT I WANT FOR .EXE>

#include <iostream>
#include <string>
#include "ch10pe2_person.h"

int main(){

    Person *personPtr = new Person("Moua", "Justin");
    personPtr->Show();
    personPtr->FormalShow();

    return 0;
}