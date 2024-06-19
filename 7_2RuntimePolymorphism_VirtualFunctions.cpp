#include <iostream>
#include <string>
using namespace std;

// Virtual Functions - Virtual Functions are also called as Dynamic Functions because Virtual Functions are Dynamic in Nature
//                                             Defined by the keyword "virtual" inside a base class and are always declared with a base class and overridden in a child class.
//                                             A virtual function is called during runtime.


class Parent
{
public:
    void getInfo()
    {
        cout << "Parent Class\n";
    }

    virtual void hello()
    {
        cout << "hello from par\n";
    }
};

class Child : public Parent
{
public:
    void getInfo()
    {
        cout << "Child class\n";
    }

    void hello()
    {
        cout << "hello from child\n";
    }
};

int main()
{

    Child c1;
    c1.hello();
    // hello from child

    Parent p1;
    p1.hello();
    // hello from par

    return 0;
}