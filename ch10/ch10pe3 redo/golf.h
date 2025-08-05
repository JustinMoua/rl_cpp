
#ifndef GOLF_H_
#define GOLF_H_


class Golf{


    static const int Len = 40;
    char fullname[Len];
    int handicap;

public:
    Golf(){fullname[0] = '\0'; handicap = 0;};
    Golf(const char *name, int hc); //This acts as the set golf function.
    void Handicap(int hc); //resets handicap to new value
    void ShowGolf(); //displays contents
};

#endif