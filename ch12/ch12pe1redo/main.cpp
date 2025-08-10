#include <iostream>
#include "cow.h"
int main(){

    Cow cow1("cow1", "running", 12.93);
    cow1.ShowCow();
    
    Cow cow2;
    cow2.ShowCow();
    
    Cow cow3 = cow1;
    cow3.ShowCow();
    
    Cow cow4{"Daisy", "sleeping", 8.2};
    cow4.ShowCow();
    
    //Dynamic Allocation
    Cow* cow5 = new Cow("Buttercup", "walking", 11.0);
    cow5->ShowCow();

    Cow cow6;
    cow6.SetName("MooMoo");
    cow6.ShowCow();

    cow6.SetAction("jumping");
    cow6.ShowCow();

    cow6.SetWeight(9.8);
    cow6.ShowCow();

    delete cow5;

    return 0;
}