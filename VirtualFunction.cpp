#include<iostream>
using namespace std;
//Virtual Functions are changed the defoult behaviour of pointer who run only base class function. If we use virtual keyword then we will able  to run the function of derived class function. 
class Base{
    public :
        int var_base = 1;
        virtual void display(void){
            cout<<" 1 Displaying Base class function value : "<<var_base<<endl;
        }
};

class Derived : public Base{
    public : 
        int var_derived = 2;
        void display(void){
          cout<<" 2 Displaying Derived class function value : "<<var_base<<endl;
          cout<<" 2 Displaying Derived class function value : "<<var_derived<<endl;
            
        }
};

int main(){
    
    Base * base_class_pointer;

    Base obj_base;
    Derived obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->display();

    return 0;
}