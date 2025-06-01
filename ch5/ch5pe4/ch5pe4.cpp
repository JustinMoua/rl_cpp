#include <iostream>

int main(){

    //Daphne has SIMPLE interest. So only $10 is added to her initial investment EVERY YEAR.
    float fltDaphneInvst = 100.00; //$100 investment
    float fltDaphneSimpleIntr = 0.10; //10% simple interest
    float fltDaphneIntr = fltDaphneSimpleIntr * fltDaphneInvst; //This is the amount that is added EVERY YEAR. 
    
    //Cleo has COMPOUND interest. So cleo has current balance + interest rate added EVERY YEAR.
    float fltCleoInvst = 100.00; //$100 investment
    float fltCleoCmpndIntr = 0.05; //10% simple interest

    //We use a do while loop to execute the math first since both initial investments are equal and would not cause the while loop to have run.
    do{
        //Daphne's
        fltDaphneInvst = fltDaphneInvst + fltDaphneIntr;

        //Cleo's
        float fltCleoIntr = fltCleoCmpndIntr * fltCleoInvst;
        fltCleoInvst = fltCleoIntr + fltCleoInvst;
    }
    while (fltCleoInvst < fltDaphneInvst);

    std::cout << "Cleo: " << fltCleoInvst << std::endl << "Daphne: " << fltDaphneInvst;

    return 0;
}