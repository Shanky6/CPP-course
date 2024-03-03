#include<iostream>
#include<iomanip>
using namespace std;
template<class T1, class T2>
float funcAvg(T1 a, T2 b){
    float avg = (a+b)/2 ;
    return avg;
}
template<class P>
void swapp(P &p, P &q){
    P temp = p;
    p = q;
    q = temp;
}

int main(){
float a = funcAvg(7,4.3);
cout<<fixed<<setprecision(1)<<a<<endl;  
int x = 54;
int y = 4;
cout<<"before swap"<<endl;
cout<<"x is : "<<x<<endl;
cout<<"y is : "<<y<<endl;
swapp(x, y);
cout<<"after swap"<<endl;
cout<<"x is : "<<x<<endl;
cout<<"y is : "<<y<<endl;

    return 0;
}