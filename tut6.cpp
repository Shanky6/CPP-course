/*Header Files and Operators*/
/*There are two types of header files
1. System header files
2. User defined Header files*/
// operators

#include<iostream>
using namespace std;

int main()
{
    int a = 2, b = 8;
    cout<<"Operators in C++."<<endl;
    cout<<"Following are the types of Operators.-"<<endl;
    // Arithmatic Operators
    cout<<"1. Arithmetic Operators"<<endl;
    cout<<"The value of a + b is : "<<a+b<<endl;
    cout<<"The value of a - b is : "<<a-b<<endl;
    cout<<"The value of a * b is : "<<a*b<<endl;
    cout<<"The value of a / b is : "<<a/b<<endl;
    cout<<"The value of a % b is : "<<a%b<<endl;
    cout<<"The value of a++  is : "<<a++<<endl;
    cout<<"The value of a-- is : "<<a--<<endl;
    cout<<"The value of ++a is : "<<++a<<endl;
    cout<<"The value of --a is : "<<--a<<endl;
    cout<<endl;
    //Assignment Operators --> used to  assign values to variables.
    /*'=' is assignment operator
      int a = 9 , b = 7;
      char ch = 'g'; */
    
    //Conditional or Comparison Operators.---
    cout<<"Following are the Conditional Operators in C++ .-"<<endl;
    cout<<"The value of a == b : "<<(a==b)<<endl;
    cout<<"The value of a != b : "<<(a!=b)<<endl;
    cout<<"The value of a <= b : "<<(a<=b)<<endl;
    cout<<"The value of a >= b : "<<(a>=b)<<endl;
    cout<<"The value of a <  b : "<<(a<b)<<endl;
    cout<<"The value of a >  b : "<<(a>b)<<endl;
    cout<<endl;

    //Logical Operators----->
    cout<<"Following are the Logical Operators in C++  .-"<<endl;
    cout<<"The value of this Logical Operator ((a==b) && (a<b)) is : "<<((a==b) && (a<b))<<endl;
    cout<<"The value of this Logical Operator ((a==b) || (a<b)) is : "<<((a==b) || (a<b))<<endl;
    cout<<"The value of this Logical Operator (!(a==b))  is : "<<(!(a==b)) <<endl;


    return 0;
}
