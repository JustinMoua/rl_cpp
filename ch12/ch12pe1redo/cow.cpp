#include <iostream>
#include "cow.h"
#include <cstring>
Cow::Cow(){
    name[0] = '\0';
    hobby = nullptr;
    weight = 0.00;
};

Cow::Cow(const char *nm, const char *ho, double wt){
    
    //name
    strncpy(name, nm, 19);
    name[19] = '\0';

    //allocate length of string
    int hoLen = strlen(ho);
    hobby = new char[hoLen + 1];
    strcpy(hobby, ho);

    //weight
    weight = wt;
};

Cow::Cow(const Cow &c){
    //copy over c.name to *this->name
    std::strncpy(name, c.name, 19);
    name[19] = '\0';

    //allocate length of string
    int hoLen = strlen(c.hobby);
    hobby = new char[hoLen + 1];
    strcpy(hobby, c.hobby); 

    weight = c.weight;

};

Cow::~Cow(){
    delete [] hobby;
};

Cow & Cow::operator=(const Cow & c){

    if (this == &c){
        return *this;
    }else{
        //copy over c.name to *this->name
        strncpy(name, c.name, 19);
        name[19] = '\0';

        delete hobby;
        //allocate length of string
        int hoLen = strlen(c.hobby);
        hobby = new char[hoLen + 1];
        strcpy(hobby, c.hobby); 

        weight = c.weight;   
    }

    return *this;
};

void Cow::ShowCow() const{
    std::cout << "Cow's name: ";
    if (name[0] != '\0')
        std::cout << name << std::endl;
    else
        std::cout << "NOT SET" << std::endl;

    std::cout << "Cow's hobby: ";
    if (hobby != nullptr && hobby[0] != '\0')
        std::cout << hobby << std::endl;
    else
        std::cout << "NOT SET" << std::endl;

    std::cout << "Cow's weight: ";
    if (weight != 0.0)
        std::cout << weight << std::endl;
    else
        std::cout << "NOT SET" << std::endl;

    std::cout << std::endl;
};

void Cow::SetName(const char *nm){
    //Check if the name is the same
    std::strncpy(name, nm, 19);
    name[10] = '\0';
};

void Cow::SetAction(const char *ho){
    if (hobby == ho){
        strcpy(hobby, ho);
    }else{
        delete [] hobby;
        int hoLen = strlen(ho);
        hobby = new char[hoLen + 1];
        strcpy(hobby, ho);
    }
};

void Cow::SetWeight(double wt){
    weight = wt;
};
