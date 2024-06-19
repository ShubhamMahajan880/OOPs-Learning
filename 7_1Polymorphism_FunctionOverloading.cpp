#include <iostream>
#include <string>
using namespace std;

//  Function Overloading - Two Functions with SAME NAME but DIFFERENT TYPE OF PARAMETER OR NUMBER OF PARAMETER

// Compile Time Polymorphism - using Example Function Overloading

class Print
{
public:
    void show(int x)
    {
        cout << "int : " << x << endl;
    }
    void show(char ch)
    {
        cout << "char : " << ch << endl;
    }
};
int main()
{
    Print p1;
    p1.show(100); // Here fnc with int parameter to int waala access kiya
    // int : 100

    p1.show('S'); // Here fnc with char parameter to char waala access kiya
    // char : S

    // Output - So here as per Function overloading, SAME FUNCTION NAME with DIFFERENT NO OF OR TYPE OF PARAMETER

    return 0;
}
