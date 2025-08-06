#include <iostream>
#include "cow.h"

int main(){
    Cow cow1("Angus", "I enjoy sizzling beef!", 32);
    Cow cow2("Prime Beef", "I am being grilled and I love it", 53);
    Cow cow3("Dairy", "I love Cooking", 83);
    Cow cow4("Mint", "My favorite hobby is Freezing", 48);
    cow1.ShowCow();
    cow2.ShowCow();
    cow3.ShowCow();
    cow4.ShowCow();
    std::cout << "=================" << std::endl;
    cow1 = cow2; //cow 1 and 2 should now be the same. 
    
    cow1.ShowCow();
    cow2.ShowCow();
    std::cout << "=================" << std::endl;
    cow2 = cow3 = cow4; //cow 2, 3, and 4 should now all be the same. 

    cow1.ShowCow();
    cow2.ShowCow();
    cow3.ShowCow();
    cow4.ShowCow();

    return 0;
}