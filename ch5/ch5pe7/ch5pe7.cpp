#include <iostream>
#include <string> //Will help us take the input of strings that have spaces in them. 

//Creating a Car structure.
struct Car{
    std::string strMake;
    int intYear;
};

int main(){

    //Store the amount of inputs the user wants to catalog.
    int intUsrInpHowManyCars;

    //Take the user's input.
    std::cout << "How many cars would you like to catalog? ";
    std::cin >> intUsrInpHowManyCars;
    std::cin.ignore(); //We want to .ignore so the newline is cleared from buffer. Otherwise, the next input reader will read a bunch of nothing.

    //Declare dynamic array
    Car *arrayOfCars = new Car[intUsrInpHowManyCars];

    //For the amount of catalogs that needs to be inputted.
    for (int i = 0; i < intUsrInpHowManyCars; i++){
        std::cout << "Car #" << i + 1 << std::endl;
        std::cout << "Please enter the make: ";
        //arrayOfCars[i] -> ... //incorrect way of storing.
        // std::cin >> arrayOfCars[i].strMake; // Incorrect way of storing a input that has MULTIPLE words.
        std::getline(std::cin, arrayOfCars[i].strMake);
        std::cout << std::endl;

        std::cout << "Please enter the year: ";
        std::cin >> arrayOfCars[i].intYear;
        std::cin.ignore();
        std::cout << std::endl;
    }

    std::cout << "Here is your collection:" << std::endl;
    for (int i = 0; i < intUsrInpHowManyCars; i++){
        std::cout << arrayOfCars[i].intYear << " " << arrayOfCars[i].strMake << std::endl;
    }

    return 0;
}