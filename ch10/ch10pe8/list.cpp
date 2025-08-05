// stack.cpp -- Stack member functions
#include "list.h"

Stack::Stack(){ // create an empty stack
    top = 0;
}

bool Stack::isempty() const{
    return top == 0;
}

bool Stack::isfull() const{
    return top == MAX;
}

bool Stack::push(const Item & item){
    if (top < MAX){
        items[top++] = item;
        return true;
    }
    else
        return false;
}

double Stack::pop()
{
    if (top > 0)
    {
        //The following does not work properly. 
        //The very first valuet hat is read and returned
        //is a misc. number and not actually the one on the top.
        // double current_payment = items[top].payment;
        // items[--top];
        double current_payment = items[--top].payment;
        return current_payment;
    }
    else
        return false;
}

void Stack::visit(void (*pf)(Item &)){
    for (int i = 0; i < MAX; i++){
        pf(items[i]);
    }
};

