#include<iostream>
#include<fstream>
#include<string>
using namespace std;
/*
The useful  classes for working with file in C++ are:
1. fstreeambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase
*/

// In order work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file :
// 1. Using the constructor
// 2. Using the member function open() of the class.


int main(){
    // this is first method using constructor{
    string st1 = "Ye text maine c++ ka use karke is file me write kiya hai.";
    string st2;

    // Opening file using constructor and  writing it 
    ofstream out("sampleText60.txt"); // Writing Operation
    out<<st1;

    ifstream in("sampleText60b.txt"); // Reading Operation
    //in>>st2; //This will only read one word.

    getline(in, st2); //This will  read complete on line.
    cout<<st2;

    in.close();
    out.close();
    //}

    // This is second method to using open() function{
    
    //Declaring an object of the type ifstream 
    ifstream in;
    string st;

    // opening a text file into object(in)
    in.open("sampleText60b.txt");

    // giving output the string lines by storing in st until the file reaches the end of it
    while (in.eof()==0)
    {
        //using getline to fill the whole line st
        getline(in, st);
        cout<<st<<endl;
    }
    


    return 0;
}