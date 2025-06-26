#ifndef GOLF_H
#define GOLF_H

class Golf{

private:
    static const int Len_m = 40;
    char fullname_m[Len_m];
    int handicap_m;

public:
    Golf();
    Golf(char *fullName, int handicap); //This would be the "setgolf" function
    void handicap(int newHandicapValue);
    int setgolf();
    void showgolf();
};
#endif