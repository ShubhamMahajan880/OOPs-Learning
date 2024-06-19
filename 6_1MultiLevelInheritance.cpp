#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;
};

class Student : public Person//Inherit from Level - 1 Person Class
{
public:
    int rollno; // Student class have entity rollno and Student class inherits from Person class which have entites name and age So overall Student class have all three entities including its own and of parent clss also
};

class Gradestudent : public Student// Inherit from Previous level - 1 & 2 Person Class & Student Class
{
public:
    string ResearchSArea;
};

int main()
{
    Gradestudent S1;
    S1.name = "Shubam_mahajan";
    S1.age = 21;
    S1.ResearchSArea = "FrontEnd Development";

    cout << S1.name << endl;
    cout << S1.age << endl;
    cout << S1.ResearchSArea << endl;
    return 0;

// Output - last class GradesStudent gets all previous entites also as per multi level inheritance. kaha se aaya upr waali class se aaya 
// Shubam_mahajan
// 21
// FrontEnd Development
}