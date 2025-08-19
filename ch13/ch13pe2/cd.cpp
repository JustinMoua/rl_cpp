#include "cd.h"
#include <cstring>
#include <iostream>

Cd::Cd(const char *s1, const char *s2, int n, double x){
    int s1Len = strlen(s1);
    performers = new char[s1Len + 1];
    strcpy(performers, s1);
    
    int s2Len = strlen(s2);
    label = new char[s2Len + 1];
    strcpy(label, s2);

    selections = n;
    playtime = x;
}

Cd::Cd(const Cd &d){
    performers = new char[strlen(d.performers) + 1];
    strcpy(performers, d.performers);
    
    label = new char[strlen(d.label) + 1];
    strcpy(label, d.label);

    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd(){
    performers = nullptr;
    label = nullptr;
    selections = 0;
    playtime = 0;
}

Cd::~Cd(){
    std::cout << "Base destructor called. " << std::endl;
    delete [] performers;
    delete [] label;
}

void Cd::Report() const{
    std::cout << "Performers: " << performers << std::endl;    
    std::cout << "Label: " << label << std::endl;
    std::cout << "Selections: " << selections << std::endl;
    std::cout << "Playtime: " << playtime << std::endl;
}

Cd & Cd::operator=(const Cd &d){
    if (this == &d){
        return *this;
    }
    delete [] performers;
    delete [] label;

    performers = new char[strlen(d.performers) + 1];
    strcpy(performers, d.performers);
    
    label = new char[strlen(d.label) + 1];
    strcpy(label, d.label);

    selections = d.selections;
    playtime = d.playtime;
    return *this;
}
// Cd::Cd(const Cd &d){
//     strncpy(performers, d.performers, 49);
//     performers[49] = '\0';

//     strncpy(label, d.label, 19);
//     label[19] = '\0';

//     selections = d.selections;
//     playtime = d.playtime;
// }

// Cd::Cd(){
//     strncpy(performers, "None", 49);
//     performers[49] = '\0';
    
//     strncpy(label, "None", 19);
//     label[19] = '\0';
    
//     selections = 0;
//     playtime = 0.00;
// }


// Cd::~Cd(){
//     std::cout << "Base destructor invoked." << std::endl;
// }


// void Cd::Report() const{
//     std::cout << "Performer: " << performers << std::endl;
//     std::cout << "Label: " << label << std::endl;
//     std::cout << "Selections: " << selections << std::endl;
//     std::cout << "Playtime: " << playtime << std::endl;
// }

// //This overloads the assignment operator
// //to allow copying of one object to another VIA deep copying.
// Cd & Cd::operator=(const Cd &d){
//     if (this == &d){
//         return *this;
//     };


//     strncpy(performers, d.performers, 49);
//     performers[49] = '\0';
//     strncpy(label, d.label,19);
//     label[19] = '\0';
//     selections = d.selections;
//     playtime = d.playtime;
//     return *this;
// }