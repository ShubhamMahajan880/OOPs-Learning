#include <iostream>
#include <string>
using namespace std;

// 8 - Abstraction -       Hiding all unnecessary details and showing only the important part

//                         Access Modifier/Access Specifier - In abstraction Access Modifier or Access Specifier specifies for PRIVATE,PROTECTED AND PUBLIC information. Which class wanna public have public access, which class wanna PVT have PRIVATE ACCESS and which class want to pvt but inheritate also have PROTECTED ACCESS

//     Abstract Class -    Abstract classes are used to provide a base class from which other classes can derived
//                         They cannot be instantiated(Object) and are menat to be inherited.
//                         Abstract classes are typically used to define an interface for derived class.
                        
                        
// Method to create Abstract Clsss - By including Abstract keyword before the class name
//                         Abstract CLASS{

//                         };

//                         Abstract classs can never be create Object.

//                         Abstract class kevl Inheritnce class k liye hona chahiye yh btatai h ki dusri Classes kesi hona chahiye,kon se kon se entities adn function hona chahiye. Its just a Blue Print for other classes.
                        


class Shape
{                            // Jis class me Automatically Virtual Function aajata h vo Abstract Class bn jaati h
    virtual void draw() = 0; // Shape clss k ander jitni bhi child class hogi un sb ke under draw() name ka fun implemeted hona chahiye
};
class Circle : public Shape
{
public:
    void draw()
    {
        cout << " drawing a Circle with reference from Shape Class "<<endl;
    }
};
// WWith ABstract Class more than one classes with same blueprint can be created and use.
class Rectangle : public Shape
{
public:
    void draw()
    {
        cout << " drawing a Rectangle class with reference of Shape Class using draw() function as per bnluprint provided from Abstract Class" << endl;
    }
};

int main()
{
    // Shape S1; ERROR : object of abstract class type "Shape" is not allowed:
    // Abstract class ka Object nahi bna skte lekin iski child class ko iske function se inherit to kara skte h, as per Abstract Class Guidelines

    Circle C1;
    C1.draw(); // drawing a Circle with reference from Shape Class

    Rectangle R1;
    R1.draw();//drawing a Rectangle class with reference of Shape Class using draw() function as per bnluprint provided from Abstract Class

    return 0;
}