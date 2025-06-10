#include <iostream>

//prototyping
float fltFnAvgGolfScore(const float * begin, const float * end);

int main(){
    float fltArr[10];

    for (int i = 0; i < 10; i++){
        std::cout << "Enter " << i << "th element here: ";
        std::cin >> fltArr[i];
    }
    std::cout << "Average: " << fltFnAvgGolfScore(fltArr, fltArr + 10);

    return 0;
}

float fltFnAvgGolfScore(const float * begin, const float * end){
    const float *pt; //*pt is the value and pt is the address of the current element
    float average;

    for (pt = begin; pt != end; pt++){
        average = average + *pt;
    }
    return average / (sizeof(end));
}