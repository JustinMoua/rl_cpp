#include <iostream>
#include <string>
#include "golf.h"

int main(){

    Golf golfer1("Bob Smith", 20);
    golfer1.Handicap(30);
    golfer1.ShowGolf();

    return 0;
}