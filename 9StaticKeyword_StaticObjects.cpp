// #include <iostream>
// #include <string>
// using namespace std;

// 2) Static Objects -
// Static Variables in a class are created & initialized once. They are shared by all the Objects of the Class.//in Class


// class A
// {
// public:
//     int x;
//     void incX()
//     {
//         x += 1;
//     }
// };
// int main()
// {
//     A obj;
//     obj.x = 0;
//     cout << obj.x << endl; // 0
//     obj.incX();
//     cout << obj.x << endl; // 1

//     A obj1;
//     A obj2;

//     obj1.x = 100;
//     obj2.x = 200;
//     cout << obj1.x << endl; // 100
//     cout << obj2.x << endl; // 200

//     return 0;
// }

// by using Static Keyword

#include <iostream>
#include <string>
using namespace std;

class ABC
{
public:
    ABC()
    {
        cout << "Constructor Here \n";
    }

    ~ABC()
    {
        cout << " Destructor Here \n";
    }
};

int main()
{
    if ((true))
    {
        ABC obj;
    }
    cout << "End of maun Function\n";
    // Output - without using Static keyword for Object first CONSTRUCTOR cll hua then DESTRUCTOR Call hua or uske baad MAIN FUNCTION.
    // Constructor Here
    // Destructor Here
    // End of maun Function

    if ((true))
    {
        static ABC obj2;
    }
    cout << "End of main Function for second Object with Static Keyword For Udnerstanding\n";

    // Output - Using Static keyword For OBJECT pahle CONSTRUCTOR  aaya phr MAIN FUNCTION  aaya r uske baad DESTRUCTOR aaya 
    // menas in case of Static Keyword For Object Static keyword k saath hoga vo lifetime tk chlega 
    // Constructor Here
    // End of main Function for second Object with Static Keyword For Udnerstanding
    // Destructor Here return 0;
}