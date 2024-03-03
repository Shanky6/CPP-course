#include<iostream>
using namespace std;
 
/*
template<class T1, class T2>
class nameOfClass{
    //body
}
*/

template<class T1, class T2>
class myclass{
    T1 data1;
    T2 data2;

    public :
        myclass(T1 a, T2 b){
            data1 = a;
            data2 = b;
        }
        void display(void){
            cout<<this->data1<<endl<<this->data2<<endl;
        }
};


int main(){
    
    myclass<int,float> obj(56, 4.5);
    obj.display();

    return 0;
}