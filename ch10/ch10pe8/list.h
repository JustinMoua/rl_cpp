// stack.h -- class definition for the stack ADT
#ifndef list_H_
#define list_H_

struct customer{
    char fullname[35];
    double payment;
};

typedef customer Item;

class Stack
{
private:
    enum {MAX = 10}; // constant specific to class
    Item items[MAX]; // holds stack items
    int top; // index for top stack item
    
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item & item); // Adds item to stack. push() returns false if stack already is full, true otherwise.
    double pop(); // pop top into item. pop() returns false if stack already is empty, true otherwise
    void visit(void (*pf)(Item &));

};
#endif