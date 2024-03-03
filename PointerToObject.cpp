#include<iostream>
using namespace std;

class Complex{
    int real, imagnary;
    public :
        void setData(int a, int b){
            real = a;
            imagnary = b;
        }
        void getData(void){
            cout<<"The Complex number is : "<<real<<"+"<<imagnary<<"i"<<endl;
            cout<<"The value of real part is : "<<real<<endl;
            cout<<"The value of imagnary part is : "<<imagnary<<"i"<<endl;
        }
};

int main(){
    
    Complex *ptr = new Complex;
    ptr->setData(5, 6);
    ptr->getData();

    return 0;
}