#include <iostream>
using namespace std;
#include "classic.h" // which will contain #include cd.h
void Bravo(const Cd &disk);
int main()
{
    Cd c1("Beatles", "Capitol", 14, 35.5);
    Classic c2 = Classic("Piano Sonata in B flat, Fantasia in C",
                         "Alfred Brendel", "Philips", 2, 57.17);
    Cd *pcd = &c1; //Notice that pcd (pointer to cd) is of type Cd. Later, polymorphism is demonstrated and is later upcasted. 
    cout << "Using object directly:\n";
    c1.Report(); // use Cd method
    std::cout << std::endl;
    c2.Report(); // use Classic method
    std::cout << std::endl;

    cout << "Using type cd * pointer to objects:\n";
    pcd->Report(); // use Cd method for cd object
    std::cout << std::endl;

    pcd = &c2; //pcd is now UPCASTED here. The next line works because I made the methods virtual! 
    pcd->Report(); // use Classic method for classic object
    std::cout << std::endl;

    cout << "Calling a function with a Cd reference argument:\n";
    Bravo(c1);
    std::cout << std::endl;
    Bravo(c2);
    std::cout << std::endl;
    cout << "Testing assignment: ";
    Classic copy;
    copy = c2;
    copy.Report();
    std::cout << std::endl;

    return 0;
}
void Bravo(const Cd &disk)
{
    disk.Report();
}