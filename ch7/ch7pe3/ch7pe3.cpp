#include <iostream>

struct box{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void outputViaByValue(box myBox);

void outputViaAddress(box *myBox);

int main(){
    box * myBox = new box; //allocate memory with new.

    std::cout << "Enter maker: ";
    std::cin >> myBox->maker;
    std::cout << "Enter height: ";
    std::cin >> myBox->height;
    std::cout << "Enter width: ";
    std::cin >> myBox->width;
    std::cout << "Enter length: ";
    std::cin >> myBox->length;
    std::cout << "Enter volume: ";
    std::cin >> myBox->volume;

    //*myBox is the value. myBox is the address.
    outputViaByValue(*myBox);
    std::cout << std::endl;
    outputViaAddress(myBox);
    return 0;
}

void outputViaByValue(box myBox){
    std::cout << myBox.maker;
    std::cout << std::endl;
    std::cout << myBox.height;
    std::cout << std::endl;
    std::cout << myBox.width;
    std::cout << std::endl;
    std::cout << myBox.length;
    std::cout << std::endl;
    std::cout << myBox.volume;
    std::cout << std::endl;
};

void outputViaAddress(box *myBox){
    std::cout << myBox->maker;
    std::cout << std::endl;
    std::cout << myBox->height;
    std::cout << std::endl;
    std::cout << myBox->width;
    std::cout << std::endl;
    std::cout << myBox->length;
    std::cout << std::endl;
    std::cout << myBox->volume;
    std::cout << std::endl;
};