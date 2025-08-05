#include <iostream>

void strFnGetCurrentTime(int currentHr, int currentMin);

int main(){
    int intHours;
    int intMinutes;

    std::cout << "Enter the number of hours: ";
    std::cin >> intHours;
    std::cout << "Enter the number of minutes: ";
    std::cin >> intMinutes;

    strFnGetCurrentTime(intHours, intMinutes);

    return 0;
}

void strFnGetCurrentTime(int currentHr, int currentMin){
    std::cout << "Time: " << currentHr << ":" << currentMin << std::endl;
}