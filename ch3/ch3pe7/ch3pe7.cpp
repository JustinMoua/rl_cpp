/*
5/15/2025 NOTE: Will have to redo this. Probably going to make it more simpler.

Author: Justin Moua

Notes:
EU Style: 1 liter per 100km
US Style: 1 mile per 1 gallon

Conversions:
100 km = 62.14 miles
1 gallon = 3.875 liters

Example:
19 mpg is about 12.4 l/100km

27mpg 8.7 l/100km

*/

#include <iostream>

float fltFnGasUnitConverter(float fltKilometers, float fltLiters);

int main(){

    float fltInpKilometers;
    float fltInpLiters;

    std::cout << "liters per 100 km to miles per gallon converter" << std::endl;
    std::cout << "Input the liters:";
    std::cin >> fltInpLiters;
    std::cout << "Input the kilometers";
    std::cin >> fltInpKilometers;
    std::cout << std::endl;

    float fltMiles, fltGallons = fltFnGasUnitConverter(fltInpKilometers, fltInpLiters);
    std::cout << fltMiles << fltGallons;

    return 0;
} 

float fltFnGasUnitConverter(float fltKilometers, float fltLiters){
    float fltMiles;
    float fltGallon;

    //km to miles
    fltMiles = fltKilometers * 0.62137;

    // liters to gallon
    fltGallon = fltLiters / 3.875;

    return fltMiles, fltGallon;
}