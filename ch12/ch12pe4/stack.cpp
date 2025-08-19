#include "stack.h"
#include <iostream>
//reminder that Item is unsigned long.

Stack::Stack(int n){
    size = n;
    pitems = new Item[size];
    top = 0;
};

// Copy constructor
Stack::Stack(const Stack & st){
    size = st.size;
    top = st.top;
    pitems = new Item[size]; //allocate memory for pitems
    for (int i = 0; i < st.size; i++)
        pitems[i] = st.pitems[i]; 
};

Stack::~Stack(){
    delete [] pitems;
};

bool Stack::isempty() const{
    if (top == 0){ //Have to use top, not size because top is what changes. Size doesn't change.
        return true;
    }
    return false;
};

bool Stack::isfull() const{
    if (top == size){ //Using top for same reason as in isempty().
        return true;
    }
    return false;
};

bool Stack::push(const Item & item){
    if (isfull()){
        std::cout << "Is full! Can not push " << item << std::endl;
        return false;
    }
    pitems[top] = item;
    top += 1;

    return true;
};

bool Stack::pop(Item & item){
    if (isempty()){
        return false;
    }
    // pitems[top] = --item;
    // top -= 1;

    top -= 1;
    item = pitems[top];
    return true;
};

Stack & Stack::operator=(const Stack & st){
    if (this == &st){
        return *this;
    }
    
    size = st.size;
    top = st.top;
    delete [] pitems;
    pitems = new Item[size];
    for (int i = 0; i < st.size; i++)
        pitems[i] = st.pitems[i];

    return *this;
};