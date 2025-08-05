#include <iostream>
#include "sales.h"

int main(){

    int intQuarters;


    while(true){
        std::cout << "How many qarters will you be entering? Enter here: ";
        std::cin >> intQuarters;
        
        if (intQuarters <= 0){
            std::cout << "Quarters can not be less than 0." << std::endl;
        }else if (intQuarters > 4){
            std::cout << "Quarters can not be greater than 4." << std::endl;
        }else{
            break;
        }
    };

    double dblSalesArr[intQuarters];
    for (int i = 0; i < intQuarters; i++){
        std::cout << "Enter Sales for quarter #" << i+1 << " here: ";
        std::cin >> dblSalesArr[i];
    }

    SALES::Sales salesObject(dblSalesArr, intQuarters);
    salesObject.ShowSales();
    
    return 0;
}