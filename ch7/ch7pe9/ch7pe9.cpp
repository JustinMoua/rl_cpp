#include <iostream>
using namespace std;

const int SLEN = 30;
struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
// getinfo() has two arguments: a pointer to the first element of
// an array of student structures and an int representing the
// number of elements of the array. The function solicits and
// stores data about students. It terminates input upon filling
// the array or upon encountering a blank line for the student
// name. The function returns the actual number of array elements
// filled.
int getinfo(student pa[], int n);

// display1() takes a student structure as an argument
// and displays its contents
void display1(student st);

// display2() takes the address of student structure as an
// argument and displays the structure’s contents
void display2(const student *ps);

// display3() takes the address of the first element of an array
// of student structures and the number of array elements as
// arguments and displays the contents of the structures
void display3(const student pa[], int n);

int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;
    student *ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete[] ptr_stu;
    cout << "Done\n";
    return 0;
}

int getinfo(student pa[], int n){
    std::cout << "Getting Information" << std::endl;
    for (int i = 0; i < n; i++){
        std::cout << "Enter student #" << i << "'s full name (char): ";
        //Will not work because cin only reads a SINGLE WORD up to the FIRST HITESPACE.
        std::cin.getline(pa[i].fullname, SLEN);
        // std::cin >> pa[i].fullname;
        // std::cin.get();
        
        std::cout << "Enter student #" << i << "'s hobby (char): ";
        //Will not work because cin only reads a SINGLE WORD up to the FIRST HITESPACE.
        std::cin.getline(pa[i].hobby, SLEN);
        // std::cin >> pa[i].hobby;
        // std::cin.get();
        
        std::cout << "Enter student #" << i << "'s oop level (int): ";
        std::cin >> pa[i].ooplevel;
        std::cin.get(); 
    }
    return n;
};
// display1() takes a student structure as an argument
// and displays its contents
void display1(student st){
    std::cout << "Display 1" << std::endl;
    std::cout << "Student's full name: " << st.fullname;
    std::cout << std::endl;
    std::cout << "Student's hobby: " << st.hobby;
    std::cout << std::endl;
    std::cout << "Student's oop level: " << st.ooplevel;
    std::cout << std::endl << std::endl;
};


// display2() takes the address of student structure as an
// argument and displays the structure’s contents
void display2(const student *ps){
    std::cout << "Display 2" << std::endl;
    std::cout << "Student's full name: " << ps->fullname;
    std::cout << std::endl;
    std::cout << "Student's hobby: " << ps->hobby;
    std::cout << std::endl;
    std::cout << "Student's oop level: " << ps->ooplevel;
    std::cout << std::endl << std::endl;  
};


// display3() takes the address of the first element of an array
// of student structures and the number of array elements as
// arguments and displays the contents of the structures
void display3(const student pa[], int n){
    std::cout << "Display 3" << std::endl;
    for (int i = 0; i < n; i++){
        std::cout << "Student's full name: " << pa[i].fullname;
        std::cout << std::endl;
        std::cout << "Student's hobby: " << pa[i].hobby;
        std::cout << std::endl;
        std::cout << "Student's oop level: " << pa[i].ooplevel;
        std::cout << std::endl << std::endl;
    }
};