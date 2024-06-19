#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    float* cgpaptr;

    Student(string name,float cgpa){
        this->name = name;
        cgpaptr = new float;
        *cgpaptr = cgpa;
    }

    // using our own Custom copy Constructor
    Student(Student &obj){
        this->name = obj.name;
        this->cgpaptr = obj.cgpaptr;

    }
    void getInfo(){
        cout<< "name : " << name << endl;
        cout<< "CGPA : " << cgpaptr <<endl;
    }

};

int main()
{
    Student S1("Shubham-mahajan", 7.52);
    S1.getInfo();
// Output  // name : Shubham-mahajan
            // CGPA : 7.52
    
    // Using Default Constructor
    Student S2(S1);
    S2.getInfo();
// Output  // name : Shubham-mahajan
            // CGPA : 7.52    
    return 0;
}