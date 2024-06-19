#include <iostream>
#include <string>
using namespace std;

// Destructor -
//                 Syntax - ~NAMEOFTHECLASS(){

//                           }

//     Destructor is just opposite of Constructor. Constructor allocate in memory whiloe Destructor delocate from memory.
//     Destructor has the same name as class
//     Destructor also call Automatically.
//     Destructor is bacially uses for delocation of memory which means that deletion of unnecessary memory from the code after successful execution.

class Student
{
public:
    string name;
    float cgpa;

    Student(string name, float cgpa)
    {
        this->name = name;
        this->cgpa = cgpa;
    }

    // Destructor
    ~Student()
    {
        cout << "Hii, Destructor here" << endl;
    }

    void getInfo()
    {
        cout << "name : " << name << endl;
        cout << "CGPA : " << cgpa << endl;
    }
};

int main()
{
    Student S1("Shubam-Mahajan", 7.52);
    S1.getInfo();
    // Output    // name : Shubam-Mahajan
    // CGPA : 7.52
    // Hii, Destructor here
    return 0;
}