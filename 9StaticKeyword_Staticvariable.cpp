#include <iostream>
#include <string>
using namespace std;

// 9 - Static Keyword -    1) Static Variable -
//                         variables declared as a Static in a function are created & initialised once for the lifetime of the program.//in function.
                        
//                         2) Static Objects -
//                         Static Variables in a class are created & initialized once. They are shared by all the Objects of the Class.//in Class


void fun()
{
    int x = 0;
    cout << "X : " << x << endl;
    x++;
}

void fun2()
{
   static int y = 0;
    cout << "y: " << y << endl;
    y++;
}
int main()
{
    // Withoout using Static Keyword
    fun(); // x : 0
    fun(); // x : 0
    fun(); // x : 0

// By usign Static Keyword, value of a variable permnantly hold in memory even fun exit or not but value will remain and hold.
    fun2();// y : 0
    fun2();// y : 1
    fun2();// y : 2
    return 0;
}