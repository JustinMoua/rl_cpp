#include "cd.h"
#include <cstring>
#include <iostream>

Cd::Cd(const char *s1, const char *s2, int n, double x){
    // int s1Len = strlen(s1);
    // int s2Len = strlen(s2);
    // strncpy(performers, s1, s1Len);
    // strncpy(label, s2, s2Len);
    strncpy(performers, s1, 49); //strncpy is a method from cstring.
                                //we put 49 because that is (almost) the size of
                                //the invoked object's private char member's size, performers.
                                //Then we make the last element equal to '\0' so that
                                //it is null-terminated. 
                                //ALSO, strcpy would not work for this case because it would
                                //not protect against memory overflow.
    performers[49] = '\0';
    strncpy(label, s2, 19);
    label[19] = '\0';

    selections = n;
    playtime = x;
};

Cd::Cd(const Cd &d){
    strncpy(performers, d.performers, 49);
    performers[49] = '\0';

    strncpy(label, d.label, 19);
    label[19] = '\0';

    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd(){
    strncpy(performers, "None", 49);
    performers[49] = '\0';
    
    strncpy(label, "None", 19);
    label[19] = '\0';
    
    selections = 0;
    playtime = 0.00;
}


Cd::~Cd(){
    std::cout << "Base destructor invoked." << std::endl;
}


void Cd::Report() const{
    std::cout << "Performer: " << performers << std::endl;
    std::cout << "Label: " << label << std::endl;
    std::cout << "Selections: " << selections << std::endl;
    std::cout << "Playtime: " << playtime << std::endl;
}

//This overloads the assignment operator
//to allow copying of one object to another VIA deep copying.
Cd & Cd::operator=(const Cd &d){
    if (this == &d){
        return *this;
    };


    strncpy(performers, d.performers, 49);
    performers[49] = '\0';
    strncpy(label, d.label,19);
    label[19] = '\0';
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}