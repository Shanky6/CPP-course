#include<iostream>
using namespace std;

class Base{
    public :
        int var_base;
        void display(void){
            cout<<"Displaying Base class variable var_base is : "<<var_base<<endl;
        }
};

class Derived : public Base {
    public :
        int var_derived;
        void display(void){
            cout<<"Displaying Base class variable var_base is : "<<var_base<<endl;
            cout<<"Displaying Derived class variable var_derived is : "<<var_derived<<endl;
        }
};

int main(){
    
    Base * base_class_pointer;
    Base obj_base;
    Derived obj_derived;

    base_class_pointer = &obj_derived; // Pointing base class pointer to derived class

    base_class_pointer->var_base = 74;
    // base_class_pointer->var_derived = 74; this will thow an error because the type of pointer is Base class type.
    base_class_pointer->display();

    Derived * derived_class_pointer;
    derived_class_pointer = &obj_derived;

    derived_class_pointer->var_base = 65;
    derived_class_pointer->var_derived = 45;
    derived_class_pointer->display();

    

    return 0;
}