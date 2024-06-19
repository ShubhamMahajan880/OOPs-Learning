#include <iostream>
#include <string>
using namespace std;

// Inheritance - When Properties and Member Function of Base Class are passed on to the derived class.
//                   Base Class/Parent Class - Jis class se Properties GYI H
//                   Child Class/Derivbed Class/Inherit Class - Jis class ne properties LI H
//                   Inheritance k case me Object create krne pr pahle BASE CLASS ka Constructor call hota uske baad Derived Class ka

// Mode of Inheritance =
//                         Derived Class	    Derived Class	  Derived Class

// Parest/Base Class	    Private Mode	    Protected Mode	  Public Mode
// Private	                Not Inherited	    Not Inherited	  Not Inherited
// Protected	            Private	            Protected	      Protected
// Public	                Private	            Protected	      Public

// Types of Inheritance - Single Inheritance - Paass Proeprties from ONE PARENT CLASS TO ONE INHERIT CLASS
//                        Multi Level Inheritance -
//                        MMultiple Inheritance -
//                        Hierarchical Inheritance
//                        Hybrid Inheritance

class Person
{
public:
    string name;
    int age;

    // Person(string name, int age)
    // {
    //     this->name = name;
    //     this->age = age;
    // }
    Person()
    {
        cout << "Me Parent Constructor hu isliye pahle me Called Hua Hu\n";
    }
    ~Person()
    {
        cout << "Me Parent Destructor hu isliye me baad me  Called Hua Hu\n";
    }
};

// let suppose there is an another class Student having entities as name,age and rollno. SO here name and age are alerady exist so using inheritance proeprties

class Student : public Person // want to inherit publically from Parent class to Student Class
{
    // wants to include name,age,rollno
public:
    int rollno;

    Student()
    {
        cout << "Child Constructor hu isliye Parent ke baad  me Call hounga\n";
    }
    ~Student()
    {
        cout << "Child Destructor hu isliye pahle me me Call hounga\n";
    }

    void getInfo()
    {
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
        cout << "roll no : " << rollno << endl;
    }
};

int main()
{
    Student S1;
    S1.name = "Shubham-Mahajan";
    S1.age = 21;
    S1.rollno = 4088;

    S1.getInfo();

    // Output - using inheritance properties previous 2 entites called without creation for another class also
    // name : Shubham-Mahajan
    // age : 21
    // roll no : 4088
    return 0;

    // Output - Object create krne pr jb Constructor create hota h to pahle PARENT CLASS ka Constructor hi CALL hoga phr CHILD CLASS ka
    // Me Parent Constructor hu isliye pahle me Called Hua Hu
    // Child Constructor hu isliye Parent ke baad  me Call hounganame : Shubham-Mahajan
    // age : 21
    // roll no : 4088

    // Output - Objkect create krne pr jb Destructor create hota h to pahle CHILD CLASS ka DESTRUCTOR CALL hoga uske baad PARENT CLASS ka
    // name : Shubham-Mahajan
    // age : 21
    // roll no : 4088
    // Child Destructor hu isliye pahle me me Call hounga
    // Me Parent Destructor hu isliye me baad me  Called Hua Hu
}

// This was an example of Single Level Inheritance.