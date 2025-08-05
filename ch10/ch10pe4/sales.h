namespace SALES{
    class Sales;
};

#ifndef SALES_H_
#define SALES_H_

//ch9's pe4 is on page 503
//ch10's pe4 is on page 560.

class SALES::Sales{

    const static int QUARTERS = 4;
    double sales[QUARTERS];
    double average;
    double max;
    double min;

public:
    // Default constructor
    Sales(){
        sales[0] = 0; 
        sales[1] = 0; 
        sales[2] = 0; 
        sales[3] = 0; 
        average = 0; 
        max = 0; 
        min = 0;
    };

    //Parameterized constructor
    // copies the lesser of 4 or n items from the array ar
    // to the sales member of s and computes and stores the
    // average, maximum, and minimum values of the entered items;
    // remaining elements of sales, if any, set to 0

    // gathers sales for 4 quarters interactively, stores them
    // in the sales member of s and computes and stores the
    // average, maximum, and minimum values
    Sales(const double ar[], int n = 0);

    // display all of the object's information.
    void ShowSales();
};

#endif

//Replace the setSales(Sales &, double [], int) function with a constructor. Implement the interactive
// setSales(Sales &) method by using the constructor.