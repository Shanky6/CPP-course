#include <iostream> 
using namespace std; 

/*
Class “A” is a parent class of two classes “B” and “C”
And both “B” and “C” classes are the parent of class “D”
The main thing to note here is that the data members and member functions
of class “A” will be inherited twice in class “D” because class “B” and “C” 
are the parent classes of class “D” and they both are being derived from class “A”.
So when the class “D” will try to access the data member or member function of class 
“A” it will cause ambiguity for the compiler and the compiler will throw an error. 
To solve this ambiguity we will make class “A” as a virtual base class. 
To make a virtual base class “virtual” keyword is used.
When one class is made virtual then only one copy of its data member and member 
function is passed to the classes inheriting it. So in our example when we will make 
class “A” a virtual class then only one copy of the data member and member function
will be passed to the classes “B” and “C” which will be shared between all classes. 
This will help to solve the ambiguity.
The syntax of the virtual base class is shown in the code snippet below,
*/

class A { 
public: 
    void say() 
    { 
        cout << "Hello world"<<endl; 
    } 
}; 
class B : public virtual A { 
};   
class C : public virtual A { 
};   
class D : public B, public C { 
}; 
