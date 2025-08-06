#include "cow.h"
#include <iostream>
#include <cstring>
// Cow::Cow() : hobby(nullptr), weight(0.0) {
//     name[0] = '\0';
// }

Cow::Cow(){
    name[0] = '\0';
    hobby = nullptr;
    weight = 0.0;
}

// Cow::Cow(const char * nm, const char * ho, double wt){
//     if (strlen(nm) > 20 ){
//         std::cout << "Name cannot be larger than 20. Failed to save name." << std::endl;
//     }else{
//         strcpy(name, nm);
//         std::cout << "Name saved!" << std::endl;
//     }
//     //get the size of hobby
// }

Cow::Cow(const char *nm, const char *ho, double wt){
    std::strncpy(name, nm, 19);
    name[19] = '\0';
    hobby = new char[std::strlen(ho) + 1]; //Allocates the amount of memory needed for the entirety of the character array by grabbing the size of ho and +1ing for null terminator.
    std::strcpy(hobby, ho);
    weight = wt;

    // std::cout << "Name of cow: " << name << std::endl; //here for debugging purposes
};

Cow::~Cow() {
    delete[] hobby;
};

//Copy Constructor
//Would be used if we created an object called original, and wanted another one called "copy" to be a copy of original.
Cow::Cow(const Cow & c){
    
    std::strncpy(name, c.name, 19);
    name[19] = '\0';

    // delete [] hobby; //Not needed. This is because the object that we are copying to is NEW. I was thinking of the assignment operator!!
    int len = std::strlen(c.hobby);
    hobby = new char[len + 1];
    std::strcpy(hobby, c.hobby);

    weight = c.weight;
};


//Assignment operator
//c is RHS.
// Cow cow1("Angus", "Grass", 300);
// Cow cow2; 
// cow2 = cow1; cow1 would be considered as "c.""

//Also, Cow& means a "reference to a Cow object."
Cow& Cow::operator=(const Cow & c){

    //check if assigning to self
    if (this == &c)
        return *this;

    // delete name;
    // int nameSize = strlen(c.name);
    // std::strncpy(name, c.name, nameSize);
    // name[nameSize] = '\0';

    std::strncpy(name, c.name, 19); //copy over the RHS (c.name) to LHS (name)
    name[19] = '\0'; 

    delete [] hobby; /// Deallocate the old memory for hobby.
                    // If we don't, leftover characters might remain when copying shorter strings.
                    // For example, assigning "Bab" to "Apple" without clearing could result in "Bable".
                    // Or leftover memory could still exist. 
                    // Or memory could become corrupted.

    int hobbySize = strlen(c.hobby); //Grab the amount of space we need to allocate for LHS by looking at the length of the RHS (c.hobby)
    hobby = new char[hobbySize + 1]; //allocate space on LHS (the variable hobby would belong to the LHS). +1 is for null character.
    std::strcpy(hobby, c.hobby); //copy over the RHS to LHS.

    weight = c.weight; //copy over RHS (c.weight) to LHS.

    return *this; //Helps when using expressions like cow3 = cow2 = cow1.
                  // can think of A = B = C or A = (result of B = C).

    //Following does not work. Leaving here for study purposes.
    // std::strncpy(name, c.name, 19);
    // name[19] = '\0';

    // delete [] hobby; //Not needed. This is because the object that we are copying to is NEW. I was thinking of the assignment operator!!
    // int len = std::strlen(c.hobby);
    // hobby = new char[len + 1];
    // std::strcpy(hobby, c.hobby);

    // weight = c.weight;
}

void Cow::ShowCow() const{
    std::cout << "Cow's Name: " << name << std::endl;
    std::cout << "Cow's Hobby: " << hobby << std::endl;
    std::cout << "Cow's Weight: " << weight << std::endl;
    std::cout << std::endl;
}