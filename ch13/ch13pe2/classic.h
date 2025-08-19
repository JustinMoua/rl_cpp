#ifndef CLASSIC_H_
#define CLASSIC_H_
#include "cd.h"

class Classic: public Cd{
private:
    char* primaryWork;
public:

    Classic();
    // Classic(char *primaryWork) : Cd(char *s1, char *s2, int n, double x);
    Classic(const char *pw, const char *s1, const char *s2, int n, double x); //parameterized derived constructor
    // Classic(const &cl) //Not the correct way to define a derived copy constructor.
    Classic(const Classic &d);//derived copy constructor
    ~Classic(); //destructor

    void Report() const; //virtual
    Classic &operator=(const Classic &d); //virtual 
    
};

#endif