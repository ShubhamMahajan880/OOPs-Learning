                                    # OOps

1 - Object - Objects are entitites in the real world
2 - Class - Class is like a blueprint of this entities.

Ex. - Teacher is class and its properties - Department,Name,Subject,Salary are examples of Object
Method - Function which we create for classs or object is called as methods

Syntax of Classs -

class NAMEFTHECLASS{
public/private/protected    
    """Attributes"""

    """Methods """
    };

Object Creation -
 ClassnAme OBJECTNAME-1;
 ClassnAme OBJECTNAME-2;
 ClassnAme OBJECTNAME-3;

 3 - Encapsulation - "Encapsulation is wrapping up of data & member funcitons in a single unit called class."
                     Ek class banana or uske under Data Member ko and Member Function ko declare karan hi Encapsulation kahalata h
                     Encapsulation helps in Data Hiding by crrating a Private Member in the class
                     Classs bnayiisliye Acces modifiers ko use kr paaye and Access Modifiers ko use kr paaye tabhi to Data ko hide kr paaye
                     

 4 - Construuctor - Constructor generates automaticaaly when object cretaed. A class can have multiple objects and object can contains multiple data(entities). So for use any data of any object in any class, Constructor uses.
                    Jb hm apna Constructor bnate h to compiler automtically constructor nahi banata h
                    Name of cosntructor is alwas as name of the classs
                    After Public a function from same class name is constructor.  Its neither a function nor a class name it's a COnstructor which doesn't have any return type. 
                    Jab hm constructor bnate h to constructor will be called as per no of objects we created
                    Constrcutor ko hamesha public me define krte h qki cisntructor ko main function se direct call jati h and main function private ko access nhi krta isliye constructor hmesha public me define kiya jaata h
                    "Special Method Invoked Automatically at time of Object Creation. used for Initialisation.
                    . Same name as class
                    . Constructor doesn't have a return type
                    . Only called once(automatically), at object creation
                    . Memory Allocation happens when constructor is called

                    There are 3 types of Constructors - I. Non-Parameterised Constrcutor - (Whhich don't have any parameter) NAMEOFCLASS(){}
                                                        
                    II Parameterised Constructor
                    III Copy Constructor
                    // Constructor Overloading or Polymorphism -
                    // - Ek class k ander multiple constructors bhi ho skte h given that unke parameters alg alg ho --> This is called Constructor Overloading or Polymorphism
                    // - Jitni parameter values ko call krenge automatically vahi costructor call hoga sura nhi


5 - Destructor -
                Syntax - ~NAMEOFTHECLASS(){
    
                          }

    Destructor is just opposite of Constructor. Constructor allocate in memory whiloe Destructor delocate from memory.
    Destructor has the same name as class
    Destructor also call Automatically.
    Destructor is bacially uses for delocation of memory which means that deletion of unnecessary memory from the code after successful execution.                                                                                            

                                                                                            
6 - Inheritance - When Properties and Member Function of Base Class are passed on to the derived class.
                  Base Class/Parent Class - Jis class se Properties GYI H
                  Child Class/Derivbed Class/Inherit Class - Jis class ne properties LI H
                  Inheritance k case me Object create krne pr pahle BASE CLASS ka Constructor call hota uske baad Derived Class ka
                                                                                            
Mode of Inheritance = 
                        Derived Class	    Derived Class	Derived Class
Parest/Base Class	Private Mode	    Protected Mode	Public Mode
Private	                Not Inherited	    Not Inherited	Not Inherited
Protected	        Private	            Protected	        Protected
Public	                Private	            Protected	        Public

Types of Inheritance - Single Inheritance - Paass Proeprties from ONE PARENT CLASS TO ONE INHERIT CLASS
                       Multi Level Inheritance -
                       MMultiple Inheritance -
                       Hierarchical Inheritance 
                       Hybrid Inheritance

7 - Polymorphism - Polymorphism is the ability of objects to taake on different forms or behave in different ways depending on the context in which they are used.

Types of polymorphism - 1) Compile Time Polymorphism - It includes Constructor Overloading  & Function Overloading
                                                                                            
                        Constructor Overloading - Two constructors with SAME NAME but DIFFERENT PARAMETERS

                        Function Overloading - Two Functions with SAME NAME but DIFFERENT TYPE OF PARAMETER OR NUMBER OF PARAMETER

                        Operator Overloading - 
                                                                                                                                                                                        
                        2) RunTime Polymorphism - It includes - Function Overriding and Virtual Functions

                        Function Overriding - Parent & Child both contain the same function with differnet implementations. The Parent Class Function is said to be OVERRIDDEN.

                        Virtual Functions - Virtual Functions are also called as Dynamic Functions because Virtual Functions are Dynamic in Nature
                                            Defined by the keyword "virtual" inside a base class and are always declared with a base class and overridden in a child class.
                                            A virtual function is called during runtime.

8 - Abstraction -       Hiding all unnecessary details and showing only the important part

                        Access Modifier/Access Specifier - In abstraction Access Modifier or Access Specifier specifies for PRIVATE,PROTECTED AND PUBLIC information. Which class wanna public have public access, which class wanna PVT have PRIVATE ACCESS and which class want to pvt but inheritate also have PROTECTED ACCESS

    Abstract Class -    Abstract classes are used to provide a base class from which other classes can derived
                        They cannot be instantiated(Object) and are menat to be inherited.
                        Abstract classes are typically used to define an interface for derived class.
                        
                        
Method to create Abstract Clsss - By including Abstract keyword before the class name
                        Abstract CLASS{

                        };

                        Abstract classs can never be create Object.

                        Abstract class kevl Inheritnce class k liye hona chahiye yh btatai h ki dusri Classes kesi hona chahiye,kon se kon se entities adn function hona chahiye. Its just a Blue Print for other classes.
                        
                                            

                                                                                            
9 - Static Keyword -    1) Static Variable -
                        variables declared as a Static in a function are created & initialised once for the lifetime of the program.//in function.
                        
                        2) Static Objects -
                        Static Variables in a class are created & initialized once. They are shared by all the Objects of the Class.//in Class
                

10 - Friend Function & Friend Class - 


















 
