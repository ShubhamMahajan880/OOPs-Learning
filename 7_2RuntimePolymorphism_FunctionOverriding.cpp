#include <iostream>
#include <string>
using namespace std;

// 2) RunTime Polymorphism - It includes - Function Overriding and Virtual Functions

//                         Function Overriding - Parent & Child both contain the same function with differnet implementations. The Parent Class Function is said to be OVERRIDDEN.


class Parent
{
public:
    void getInfo()
    {
        cout << "Parent Class\n";
    }
};

class Child : public Parent
{
public:
    void getInfo()
    {
        cout << "Child class\n";
    }
};

int main()
{

    Child c1;
    c1.getInfo();
    // Output - on calling child class it will print from child class
    // Child Class

    // -> So in this case yh CHILD name ka FUNCTION jo CHILD CLASS me h BASE CLASS/PARENT CLASS ke Function ko OVERRIDE kr rha h

    Parent p1;
    p1.getInfo();
    // Output - on calling parent class it will print from parent class
    // Parent Class

    return 0;
}