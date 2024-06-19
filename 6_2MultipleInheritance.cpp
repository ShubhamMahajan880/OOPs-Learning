#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    int rollno;
};

class Teacher
{
public:
    string Subject;
    double Salary;
};

class TA : public Student, public Teacher// Inherit from previous multiple classes at a time using multiple Inheritance COnept
{

};

int main()
{
    TA t1;
    t1.name = "Iron-man";
    t1.Subject = "Jarvis Study";

    cout << t1.name <<endl;
    cout << t1.Subject <<endl;
    return 0;
// Output - Here Class TA don't have anyh entity still it contains values from previous Classes Student and Teacher using Multiple Inheritance
    // Iron-man
    // Jarvis Study
}