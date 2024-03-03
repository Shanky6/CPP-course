#include<iostream>
using namespace std;

class A{
    int a;
    public:
        void setData(int a){
    //'this' is a keyword which is a pointer which points to the object which invokes the member function.
            this->a = a;
        }
        void getData(void){
            cout<<"The value of a is : "<<a<<endl;
        }
};

int main(){
    A obj;
    obj.setData(4);
    obj.getData();


    return 0;
}