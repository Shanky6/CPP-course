#include<iostream>
using namespace std;

template<class T>
class Vector{
    public :
    T * arr;
    int size;

    Vector(int m){
        size = m;
        arr = new  T[size];

    }
    T dotProtduct(Vector &v){
        T d = 0;
        for (int i = 0; i < size; i++)
        {
           d += this->arr[i] * (v.arr[i]);
        }
        return d;

    }
};

int main(){

    // Vector<int> v1(3);
    // Vector<int> v2(3);
    // v1.arr[0] = 4;
    // v1.arr[1] = 3;
    // v1.arr[2] = 2;

    // v2.arr[0] = 1;
    // v2.arr[1] = 6;
    // v2.arr[2] = 4;

    // int a = v1.dotProtduct(v2);
    // cout<<a<<endl;

    Vector<float> v1(3);
    Vector<float> v2(3);
    v1.arr[0] = 4.1;
    v1.arr[1] = 3.0;
    v1.arr[2] = 2.4;

    v2.arr[0] = 1.2;
    v2.arr[1] = 6.0;
    v2.arr[2] = 4.3;

    float b = v1.dotProtduct(v2);
    cout<<b<<endl;


    return 0;
}