#ifndef CD_H_
#define CD_H_

// base class
class Cd
{ // represents a CD disk
private:
    char* performers;
    char* label;
    int selections;  // number of selections
    double playtime; // playing time in minutes
public:
    Cd(const char *s1, const char *s2, int n, double x); //Parameterized Constructor
    Cd(const Cd &d); //Copy constructor
    Cd(); //Default Constructor
    virtual ~Cd(); // Destructor
    virtual void Report() const; // reports all CD data
    virtual Cd &operator=(const Cd &d); //Overloaded Assignment Operator 
};

#endif