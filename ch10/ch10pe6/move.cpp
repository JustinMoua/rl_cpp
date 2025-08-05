#include "move.h"
#include <iostream>

Move::Move(double a, double b){
    this->x = a;
    this->y = b;
};

void Move::showmove() const{
    std::cout << "Move x: " << x << std::endl;
    std::cout << "Move y: " << y << std::endl;
};

Move Move::add(const Move &m) const{
    // double newX = (x*m) + x;
    // double newY = (y*y) + y;
    // Move newMoveObject(newX, newY);
    
    return Move(x+m.x, y+m.y);
};

//the parameters x and y are supposed to be a and b. But I put x and y there to emphasize that
// "this->" specifically refers to the object's x and y variables. Whereas x and y refers to the x and y that was passed.
void Move::reset(double x, double y){
    this->x = x;
    this->y = y;
}
