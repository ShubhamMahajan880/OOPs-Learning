#include <iostream>
#include <string>
using namespace std;

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