#include <iostream>
#include <string>

double add(double x, double y);
double loopThruIthVal(std::string pair_values, int begin, int end);

double add(double a, double b);
double sub(double a, double b);
double mul(double a, double b);

int main(){
    std::string strUsrInp;
    double dblVal1;
    double dblVal2;

    //Example shown from textbook. Function that accepts two doubles and the array consists of add, sub, and mul.
    double (*pfCalculate[3])(double, double) = { add, sub, mul };


    while (true){
        //Ask for user input.
        std::cout << "Enter a pair of numbers with space between them. Type q and click enter to quit.\nEnter here: ";
        std::getline(std::cin, strUsrInp); // std::cin >> strUsrInp; // does not work as intended because cin only reads up to whitespace. 
        if (strUsrInp == "q" || strUsrInp == "Q"){
            break;
        }
        //Parse that input
        size_t whiteSpacePos = strUsrInp.find(' ');

        for (int i = 0; i < 2; i++){
            int begin;
            int end;

            //Checks whether we are on the first or second loop.
            if (i == 0){ //if on the first loop.
                begin = 0;
                end = whiteSpacePos;
                dblVal1 = loopThruIthVal(strUsrInp, begin, end);
            }
            else if (i == 1) { //if on the first loop.
                begin = whiteSpacePos;
                end = strUsrInp.size();
                dblVal2 = loopThruIthVal(strUsrInp, begin, end);
            }else{
                std::cout << "Error in for loop!";
            }
        }
        
        //create variables of doubles that store values
        //of dblVal1 and dblVal2 being passed into the add, sub, amd mul function. 
        //pfCalculate[0] points to the 0th address and passes dblVal1 and dblVal2
        //into what is stored at the 0th element. In this case, it is the add() function.
        double addResult = pfCalculate[0](dblVal1, dblVal2);
        double subResult = pfCalculate[1](dblVal1, dblVal2);
        double mulResult = pfCalculate[2](dblVal1, dblVal2);

        std::cout << dblVal1 << " + " << dblVal2 << " = " << addResult << std::endl;
        std::cout << dblVal1 << " - " << dblVal2 << " = " << subResult << std::endl;
        std::cout << dblVal1 << " * " << dblVal2 << " = " << mulResult << std::endl;
        std::cout << std::endl;
    };
    
    return 0;
}

double add(double x, double y){
    return x + y;
}

double sub(double a, double b){ 
    return a - b;
}

double mul(double a, double b){
    return a * b; 
}

//Function to grabt he Ith value. 
double loopThruIthVal(std::string pair_values, int begin, int end) {
    std::string temp;
    
    //For loop to go from the beginning of the 
    //first position in the string that contains
    //the ith number inputted.
    for (begin; begin < end; begin++){
        temp = temp + pair_values[begin]; //This should concat temp with the chars from strUsrInp[i].
    }

    return std::stod(temp);
};

// double calculate(double val1, double val2, double (*pf)(double pfVal1, double pfVal2) );
// double add(double x, double y);

// int main(){
//     double q = calculate(2.5, 10.4, add);
//     std::cout << q;
//     return 0;
// }

// double calculate(double val1, double val2, double (*pf)(double pfVal1, double pfVal2)){
//     return (*pf)(val1, val2);
// };
// double add(double x, double y){
//     return x + y;
// };