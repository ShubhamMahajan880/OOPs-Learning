#include <iostream>
#include <string>
using namespace std;

/*
 Encapsulation
-"Encapsulation is wrapping up of data & member funcitons in a single unit called class."
-Ek class banana or uske under Data Member ko and Member Function ko declare karan hi Encapsulation kahalata h
-Encapsulation helps in Data Hiding by crrating a Private Member in the class
-Classs bnayiisliye Acces modifiers ko use kr paaye and Access Modifiers ko use kr paaye tabhi to Data ko hide kr paaye
*/

class Account
{
private:
    double balance;
    string Password;

public:
    string AccountHoldername;
    double AccountNumber;
};

int main()
{
    Account a1;
    a1.AccountHoldername = "Shubham Mahajan";
    cout << a1.AccountHoldername << endl;
    return 0;
}
