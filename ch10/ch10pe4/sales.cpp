#include "sales.h"
#include <iostream>

using namespace SALES;

Sales::Sales(const double ar[], int n){
    for (int i = 0; i < n; i++){
        sales[i] = ar[i];
    }

    //compute average
    double tempSum = 0;
    double tempMax = 0;
    double tempMin = 0;

    for (int i = 0; i < n; i++){
        tempSum += sales[i];
        if (i == 0){
            tempMax = sales[i];
            tempMin = sales[i];
        }else{
            if (tempMax < sales[i]) tempMax = sales[i];
            if (tempMin > sales[i]) tempMin = sales[i];
        }
    }

    average = tempSum/n;
    max = tempMax;
    min = tempMin;
};

void Sales::ShowSales(){
    std::cout << "Average: " << average << std::endl;
    std::cout << "Maximum: " << max << std::endl;
    std::cout << "Minimum: " << min << std::endl;
};