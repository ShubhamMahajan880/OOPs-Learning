#include <iostream>
#include <string>
using namespace std;

// Types of polymorphism - 1) Compile Time Polymorphism - It includes Constructor Overloading  & Function Overloading

//                         Constructor Overloading - Two constructors with SAME NAME but DIFFERENT PARAMETERS

//                         Function Overloading - Two Functions with SAME NAME but DIFFERENT TYPE OF PARAMETER OR NUMBER OF PARAMETER

//                         Operator Overloading -

//                         2) RunTime Polymorphism - It includes - Function Overriding and Virtual Functions

//                         Function Overriding - Parent & Child both contain the same function with differnet implementations. The Parent Class Function is said to be OVERRIDDEN.

//                         Virtual Functions - Virtual Functions are also called as Dynamic Functions because Virtual Functions are Dynamic in Nature
//                                             Defined by the keyword "virtual" inside a base class and are always declared with a base class and overridden in a child class.
//                                             A virtual function is called during runtime.


// Compile Time Polymorphism - using Example Constructor Overloading

class Student
{
public:
    string name;

    Student()
    {
        cout << "non-Parameterizeed\n";
    }

    Student(string name)
    {
        this->name = name;
        cout << "Parameterized\n";
    }
};

int main()
{

    Student S1; // when parameters are not taken

    // Output - non-Parameterizeed

    Student S2("JarvisHere");
    // Output - Parameterized
    return 0;
}
