#include <iostream>
#include <string>
//Those notes are from page 362 and 363 of Stephen Prata's
//C++ textbook.

//  double (*pf)(int); 
//      - pf points to a function that takes
//        one int argument and that returns
//        type double.
//      - pf points to a function that returns double.
//      - pf is a pointer to a function that takes an int argument and returns a double.
//      - Example: 
//          double myfunc(int);
//          double (*pf)(int) = myfunc;



//  double *pf(int); 
//      - pf() is a function that returns a pointer-to-double
//      - pf is a function that takes an int argument and returns a pointer to double (double*).
//      - Example:
//          - double* pf(int x) { ... }


// double pam(int);
// double (*pf)(int);
// pf = pam;
// The code above has pf pointing to the pam() function.


// double (*pf)(int) → pointer to function returning double
// double *pf(int) → function returning pointer to double


double calculate(double val1, double val2, double (*pf)(double pfVal1, double pfVal2) );

double add(double x, double y);
double sub(double x, double y);
double mul(double x, double y);

double loopThruIthVal(std::string pair_values, int begin, int end);

int main(){
    std::string strUsrInp;
    double dblVal1;
    double dblVal2;
    while (true){
        //Ask for user input.
        std::cout << "Enter a pair of numbers with space between them. Type q and click enter to quit.\nEnter here: ";
        std::getline(std::cin, strUsrInp); // std::cin >> strUsrInp; // does not work as intended because cin only reads up to whitespace. 
        if (strUsrInp == "q" || strUsrInp == "Q"){
            break;
        }
        //Parse that input
        size_t whiteSpacePos = strUsrInp.find(' ');

        //Checks for white space. 
        // if (whiteSpacePos != std::string::npos) {
        //     std::cout << "Whitespace at: " << whiteSpacePos << std::endl;
        // } else {
        //     std::cout << "No Whitespace." << std::endl;
        // }

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
        
        std::cout << dblVal1 << " + " << dblVal2 << " = " << calculate(dblVal1, dblVal2, add) << std::endl;
        std::cout << dblVal1 << " - " << dblVal2 << " = " << calculate(dblVal1, dblVal2, sub) << std::endl;
        std::cout << dblVal1 << " * " << dblVal2 << " = " << calculate(dblVal1, dblVal2, mul) << std::endl;

        // std::cout << "dblVal1: " << dblVal1 << std::endl
        //           << "dblVal2: " << dblVal2;
        std::cout << std::endl
                  << std::endl;
    };
    
    return 0;
}

double calculate(double val1, double val2, double (*pf)(double pfVal1, double pfVal2)){
    return (*pf)(val1, val2);
};
double add(double x, double y){
    return x + y;
};
double sub(double x, double y){
    return x - y;
}
double mul(double x, double y){
    return x * y;
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