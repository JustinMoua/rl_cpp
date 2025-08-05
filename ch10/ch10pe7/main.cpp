#include <iostream>
#include "plorg.h"

int main(){

    Plorg plorg1("Paimon", 29);
    plorg1.report();
    plorg1.setCI(61);
    plorg1.report();

    Plorg plorg2;
    plorg2.report();

    return 0;
}