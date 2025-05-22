#include <iostream>
#include <string>

struct pizzaPlace{
    std::string strPizzaCompany;
    float fltDiameterOfPizza;
    float fltWeightOfPizza;
};

int main(){

    pizzaPlace myOrder = {"Dominoes", 12.43, 5.4};
    std::cout << "Here is a sample pizza order!" << std::endl;
    std::cout << "Company: " << myOrder.strPizzaCompany << std::endl;
    std::cout << "Diameter: " << myOrder.fltDiameterOfPizza << std::endl;
    std::cout << "Weight: " << myOrder.fltWeightOfPizza << std::endl;
    std::cout << std::endl;


    std::cout << "Now enter your own!" << std::endl;
    std::cout << "What is the pizza company? ";
    std::getline(std::cin, myOrder.strPizzaCompany);
    std::cout << "What is the daimeter of the pizza? ";
    std::cin >> myOrder.fltDiameterOfPizza;
    std::cout << "What is the weight of the pizza? ";
    std::cin >> myOrder.fltWeightOfPizza;

    std::cout << "Weight: " << myOrder.strPizzaCompany << std::endl
              << "Diameter: " << myOrder.fltDiameterOfPizza << std::endl
              << "Weight: " << myOrder.fltWeightOfPizza << std::endl;

    return 0;
}