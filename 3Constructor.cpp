#include <iostream>
#include <string>
using namespace std;

/*
 - Construuctor -
-Constructor generates automaticaaly when object cretaed. A class can have multiple objects and object can contains multiple data(entities). So for use any data of any object in any class, Constructor uses.
-Jb hm apna Constructor bnate h to compiler automtically constructor nahi banata h
-Name of cosntructor is alwas as name of the classs
-After Public/Private/Protected a function from same class name is constructor.  Its neither a function nor a class name it's a COnstructor which doesn't have any return type.
-Jab hm constructor bnate h to constructor will be called as per no of objects we created
-Constrcutor ko hamesha public me define krte h qki cisntructor ko main function se direct call jati h and main function private ko access nhi krta isliye constructor hmesha public me define kiya jaata h
"
"Special Method Invoked Automatically at time of Object Creation. used for Initialisation.
                    . Same name as class
                    . Constructor doesn't have a return type
                    . Only called once(automatically), at object creation
                    . Memory Allocation happens when constructor is called
"
- Ek class k ander multiple constructors bhi ho skte h given that unke parameters alg alg ho --> This is called Constructor Overloading or polymorphism
*/
// ---------------------------------------------------------------------------------------------------------------------------------

// 1 - Non parameterised Constuctor -

// class Student
// {
// private:
//     long Package;

// public:
// // Non Parameterised constructor
//     Student()
//     {
//     // cout<<"Hello, Constructor here\n";
//      domain = "rtCamp";
//     }
//     string name;
//     string domain;
//     int age;
//     double ContactNumber;

// };

// int main()
// {
//     Student S1;
//     Student S2;
//     Student S3;
//     S1.name = "Shubham - Mahajan";
//     S1.ContactNumber = 9669999880;

//     cout << S1.name << endl;   //
//                                // Output - // Hello, Constructor here
//                                // Hello, Constructor here
//                                // Hello, Constructor here
//                                // Shubham - Mahajan
//     cout << S1.domain << endl; // using constructor domain automatically alloted.
//     // Output -  // Shubham - Mahajan
//     // rtCamp
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------------------------------------

// 2 - Parameterised Constructor -

// class Student
// {
// private:
//     long Package;

// public:
//     // Paramterised Constructor -
//     Student(string n, string d, int ag, double CN)
//     {
//         name = n;
//         domain = d;
//         age = ag;
//         ContactNumber = CN;
//     }

//     string name;
//     string domain;
//     int age;
//     double ContactNumber;

//     void getInfo()
//     {
//         cout << "Name : " << name << endl;
//         cout << "Domain : " << domain << endl;
//     }
// };

// int main()
// {
//     Student S1("Shubham", "Wordpress Developer", 21, 9669999880);
//     S1.getInfo();
// // Output   //     Name : Shubham
//             // Domain : Wordpress Developer

//     return 0;
// }
// ---------------------------------------------------------------------------------------------------------------------------------

// Constructor Overloading or Polymorphism -
// Constructor having same name but different types or paramters is called as Constructor Overloading or Polymorphism
// - Ek class k ander multiple constructors bhi ho skte h given that unke parameters alg alg ho --> This is called Constructor Overloading or Polymorphism
// - Jitni parameter values ko call krenge automatically vahi costructor call hoga sura nhi

// class Student
// {
// private:
//     long Package;

// public:
//     string name;
//     string domain;
//     int age;
//     double ContactNumber;
// // Non Parameterised constructor
//     Student()
//     {
//     // cout<<"Hello, Constructor here\n";
//      domain = "rtCamp";
//     }
//         // Paramterised Constructor -
//     Student(string n, string d, int ag, double CN)
//     {
//         name = n;
//         domain = d;
//         age = ag;
//         ContactNumber = CN;
//     }

//         void getInfo()
//     {
//         cout << "Name : " << name << endl;
//         cout << "Domain : " << domain << endl;
//     }

// };

// int main()
// {
//     Student S1;
//     Student S2;
//     Student S3;
//     S1.name = "Shubham - Mahajan";
//     S1.ContactNumber = 9669999880;

//     cout << S1.name << endl;   //
//                                // Output - // Hello, Constructor here
//                                // Hello, Constructor here
//                                // Hello, Constructor here
//                                // Shubham - Mahajan
//     cout << S1.domain << endl; // using constructor domain automatically alloted.
//     // Output -  // Shubham - Mahajan
//     // rtCamp

//     Student S4("Shubham", "Wordpress Developer", 21, 9669999880);
//     S4.getInfo();
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------------------------------------

// use of this-> operator

// class Student
// {
// private:
//     long Package;

// public:
//     string name;
//     string domain;
//     int age;
//     double ContactNumber;

//         // Paramterised Constructor -
//     Student(string name, string domain, int age, double ContactNumber)
//     {
        // this->name = name;//this->name indicates that this name from string name declared in property of class and = name; indicates that from that declared name to this declared name
//         this-> domain = domain;
//         this->age = age;
//         this-> ContactNumber = ContactNumber;
//     }

//         void getInfo()
//     {
//         cout << "Name : " << name << endl;
//         cout << "Domain : " << domain << endl;
//     }

// };
// ---------------------------------------------------------------------------------------------------------------------------------

// 3 - Copy Constructor - 3.1 - Default Copy Constructor - Make a copy of given constructor and use it as per parameter passing

// class Student
// {
// private:
//     long Package;

// public:
//     // Paramterised Constructor -
//     Student(string n, string d, int ag, double CN)
//     {
//         name = n;
//         domain = d;
//         age = ag;
//         ContactNumber = CN;
//     }

//     string name;
//     string domain;
//     int age;
//     double ContactNumber;

//     void getInfo()
//     {
//         cout << "Name : " << name << endl;
//         cout << "Domain : " << domain << endl;
//     }
// };

// int main()
// {
//     Student S1("Shubham", "Wordpress Developer", 21, 9669999880);
//     // S1.getInfo();

//     Student S2(S1);//default copy constructor invoke
//     S2.getInfo();

// // Output   // Name : Shubham
//             // Domain : Wordpress Developer
// // Using Copy Constructor we are getting all called values by passing One COnstructor to Another COnstructor or USING COPY CONSTRUCTOR
//     return 0;
// }
// ---------------------------------------------------------------------------------------------------------------------------------

// 3 - Copy Constructor - 3.2 - Custom Copy Constructor - work done by creating a cusotm copy constructor instead of default constructor

// class Student
// {
// private:
//     long Package;

// public:
//     string name;
//     string domain;
//     int age;
//     double ContactNumber;
//     // Paramterised Constructor -

//     Student(string name, string domain, int age, double ContactNumber)
//     {
//         this->name = name;
//         this->domain = domain;
//         this->age = age;
//         this->ContactNumber = ContactNumber;
//     }

//     // Copy Constructor
    // Student(Student &orgObj)//Student ko original Object banaya
//     {
//         cout<<"Custom Copy Constructor here\n";
        // this->name = orgObj.name;// this->name( this ka name ) = orgObj.name( Object ka name )
//         this->domain = orgObj.domain;
//         this->age = orgObj.age;
//         this->ContactNumber = orgObj.ContactNumber;
//     }

//     void getInfo()
//     {
//         cout << "Name : " << name << endl;
//         cout << "Domain : " << domain << endl;
//     }
// };

// int main()
// {
//     Student S1("Shubham", "Wordpress Developer", 21, 9669999880);
//     // S1.getInfo();

//     Student S2(S1); // Custom copy constructor invoke
//     S2.getInfo();

//     // Output   // Name : Shubham
//     // Domain : Wordpress Developer
//     // Using Copy Constructor we are getting all called values by passing One COnstructor to Another COnstructor or USING COPY CONSTRUCTOR
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------------------------------------
