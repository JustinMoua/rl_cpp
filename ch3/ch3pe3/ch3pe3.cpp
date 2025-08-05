#include <iostream>

float getDegrees(unsigned int intDegrees, unsigned int intMinOfArc, unsigned int intSecOfArc);

int main(){

    unsigned int intDegrees;
    unsigned int intMinOfArc;
    unsigned int intSecOfArc;

    std::cout << "First, enter the degrees: ";
    std::cin >> intDegrees;

    std::cout << "Next, enter the minutes of arc: ";
    std::cin >> intMinOfArc;

    std::cout << "Finally, enter the seconds of arc: ";
    std::cin >> intSecOfArc;

    float degrees = getDegrees(intDegrees, intMinOfArc, intSecOfArc);

    std::cout << intDegrees << " degrees, " << intMinOfArc << " minutes, " << intSecOfArc << " seconds = " << degrees << " degrees";
    return 0;
}

float getDegrees(unsigned int intDegrees, unsigned int intMinOfArc, unsigned int intSecOfArc){
    return intDegrees + (intMinOfArc / 60.0f) + (intSecOfArc / 3600.0f);
}

// float getDegrees(int intDegrees, int intMinOfArc, int intSecOfArc){
//     float fltOutput = intDegrees;

//     float fltTemp;

//     // 1 min = 60 sec
//     // 60 min = degree

//     float fltTotalSeconds = (intMinOfArc / 60) + intSecOfArc;
//     float fltTotalMins = fltTotalSeconds * 60;
//     fltOutput = fltOutput + (fltTotalMins* 60);

//     return fltOutput;
// }