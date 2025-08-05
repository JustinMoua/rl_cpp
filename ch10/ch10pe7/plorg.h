#ifndef PLORG_H_
#define PLORG_H_

class Plorg{

    const static char LIMIT_m = 19;
    char name_m[LIMIT_m];
    int ci_m; //contentment index
public: 
    Plorg();
    Plorg(const char *name, int ci);
    void setCI(int ci);
    void report();

};

#endif