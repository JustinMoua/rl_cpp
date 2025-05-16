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

float fltFnGasUnitConverter(float fltLitersPer100km);

int main() {
    float fltInpLitersPer100Km;

    std::cout << "Enter the l/100km you'd like to convert to mpg: ";
    std::cin >> fltInpLitersPer100Km;

    float fltMpg = fltFnGasUnitConverter(fltInpLitersPer100Km);

    std::cout << fltMpg << " mpg";

    return 0;
}

float fltFnGasUnitConverter(float fltLitersPer100km) {
    return 235.215f / fltLitersPer100km;
}