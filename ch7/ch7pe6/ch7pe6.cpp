#include <iostream>

// void Fill_array(double *begin, double *end);
// void Show_array(double *begin, double *end);
// void Reverse_array(double *begin, double *end);
// void Reverse_array2(double *begin, double *end);
void Fill_array(double arr[], int arrSize);
void Show_array(double arr[], int arrSize);
void Reverse_array(double arr[], int arrSize);
void Reverse_array2(double arr[], int arrSize);

int main(){

    int size;

    std::cout << "Enter the desired size of the array: ";
    std::cin >> size;

    //This line was from Listing 4.18 in Stephen Prata's C++ textbook.
    //double *arr[] = new arr; //incorrect way of creating a dynamic away.
    double *arr = new double[size]; //space for "size"th doubles.

    Fill_array(arr, size);
    std::cout << std::endl;

    std::cout << "Filled Array" << std::endl;
    Show_array(arr, size);
    std::cout << std::endl;

    Reverse_array(arr, size);
    std::cout << std::endl;

    std::cout << "Reversed Array" << std::endl;
    Show_array(arr, size);
    std::cout << std::endl;

    Reverse_array2(arr, size);
    std::cout << std::endl;

    std::cout << "Reversed 2 Array" << std::endl;
    Show_array(arr, size);
    std::cout << std::endl;
    
    return 0;
}

                //arr is the ADDRESS of the arr. Same as using *arr. Figure 7.4 from Stephen Prata's C++ showcases this.
void Fill_array(double arr[], int arrSize){

    double inpValues;
    for (int i = 0; i < arrSize; i++){
        std::cout << "Enter a double here: ";
        std::cin >> inpValues;
        arr[i] = inpValues;
    }
    std::cout << std::endl;
};

void Show_array(double arr[], int arrSize){
    std::cout << "Array size: " << arrSize << std::endl;
    std::cout << "The array contains the following: ";
    for (int i = 0; i < arrSize; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
};

void Reverse_array(double arr[], int arrSize){
    double *tempArr = new double[arrSize];
    
    //The amount we have to decrement by so we can obtain the original
    //array's values and store them backwards.
    int decrementer = 0; 
    //for(int i = arrSize; i>0; i--) does not work because
    //i would never go to 0. It also starts out at 4. The array only
    //ranges from the 0th to 3th element and not 1th to 4th.
    for(int i = arrSize-1; i >= 0; i--){
        tempArr[i] = arr[(i - (i - decrementer))];
        decrementer += 1;
    }

    /*
    4-(4-0) = 4-4 = 0
    3-(3-1) = 3-2 = 1
    2-(2-2) = 2-0 = 2
    1-(1-3) = 1-(-2)= 3
    */

    //Store the temporar array's (reversed array) value into our array.
    for(int i = 0; i < arrSize; i++){
        arr[i] = tempArr[i];
    }
    // std::cout << "The array can be reversed as: ";
    // for (int i = arrSize; i > 0; i--){
    //     std::cout << arr[i] << " ";
    // }

    delete tempArr;
};

void Reverse_array2(double arr[], int arrSize){
    double *tempArr = new double[arrSize];
    
    //decrementer now starts at 1.
    //This is because we are reversing ALL BUT the first and last elements.
    //Say arrSize = 4. 4-(4-1) = 4-3 = 1. This results in us
    //grabbing the value of arr[1] at the first loop and storing that
    //in tempArr[i = arrSize-2] or tempArr[4-2] or tempArr[2]!
    int decrementer = 1;
    for(int i = arrSize-2; i >= 1; i--){
        tempArr[i] = arr[(i - (i - decrementer))];
        decrementer += 1;
    }

    for(int i = 1; i < arrSize-1; i++){
        arr[i] = tempArr[i];
    }

    delete tempArr;
};
