#include <iostream>
#include <string>
//prototype
float fltFnHarmonicMean(float fltX, float fltY);

int main(){

    float fltUsrX;
    float fltUsrY;

    while(fltUsrX != 0 || fltUsrY != 0){
        std::cout << "Enter x: ";
        std::cin >> fltUsrX;
        std::cout << "Enter y: ";
        std::cin >> fltUsrY;
        std::cout << fltFnHarmonicMean(fltUsrX, fltUsrY);
        std::cout << std::endl << std::endl;
    }
}

float fltFnHarmonicMean(float fltX, float fltY){
    return (2.0 * fltX * fltY) / (fltX + fltY);
}