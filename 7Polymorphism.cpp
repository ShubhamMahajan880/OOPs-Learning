#include <iostream>
#include <string>
using namespace std;

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
