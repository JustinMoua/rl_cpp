#include <string>

class Person{

private:
    static const int LIMIT = 25;
    std::string lname;       // Person's last name
    char fname[LIMIT];  // Person's first name
public:
    Person() { lname = "";  fname[0]='\0';};
    
    
    //const std::string &ln = passing a reference to a constant string.
    //  Avoids copying. Used like a normal string. Passing by reference 
    //  means "providing a function with access to the memory address 
    //  of a variable, rather than creating a copy of its value"
    // 
    //const char *fn is used instead of const char &fn since using an &
    //  only refrences a single character and not the whole string. 
    //  This is a c-style string and they are ALWAYS passed as pointers.
    //  Also, const char *fn is a pointer to char. fn is the pointer. 
    // 
    //Heyyou is a default value.
    Person(const std::string &ln, const char *fn = "Heyyou");

    //Displays lname and fname
    //the const means that the function doesn't modify objects.

    void Show() const;  //firstname lastname format
    void FormalShow() const; // lastname, firstname format
};