//g++ <NAME OF FILE W/MAIN> <NAME OF FILE W/IMPLEMENTATION> -o <NAME THAT I WANT FOR .EXE>
//.\<NAME THAT I WANT FOR .EXE>

#include <iostream>
#include "ch10pe3_golf.h"

int main(){

    Golf *ptrTigerWoods = new Golf();

    // ptrTigerWoods->Golf::Golf("Tiger Woods", 120);

    ptrTigerWoods->Golf::setgolf();

    ptrTigerWoods->Golf::showgolf();

    ptrTigerWoods->Golf::handicap(115);

    ptrTigerWoods->Golf::showgolf();

    return 0;
}