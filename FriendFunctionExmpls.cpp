#include <iostream>
using namespace std;
// Example Number - 2, this is simple example of friend function-----
class Y;

class X
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }
    friend void add(X, Y);
};

class Y
{
    int num;

public:
    void setValue(int value)
    {
        num = value;
    }
    friend void add(X, Y);
};

void add(X o1, Y o2)
{
    cout << "Summing data of X and Y objects gives me " << o1.data + o2.num << endl;
} // till here is the part of simple example of friend function.

// Example Number - 2, this is a complex example of friend function.

class c2;

class c1
{
    int val1;
    friend void exchange(c1 &, c2 &);

public:
    void inData(int a)
    {
        val1 = a;
    }

    void display(void)
    {
        cout << val1 << endl;
    }
};

class c2
{
    int val2;
    friend void exchange(c1 &, c2 &);

public:
    void inData(int a)
    {
        val2 = a;
    }

    void display(void)
    {
        cout << val2 << endl;
    }
};

void exchange(c1 &x, c2 &y)
{
    int tmp = x.val1;
    x.val1 = y.val2;
    y.val2 = tmp;
}

int main()
{
    // this is the main function to run simple example->
    X a1;
    a1.setValue(4);

    Y b1;
    b1.setValue(35);

    add(a1, b1);
    cout << endl;

    // this is the main function to run complex example ->
    c1 oc1;
    c2 oc2;

    oc1.inData(34);
    cout << "Value of c1 is : ";
    oc1.display();

    oc2.inData(67);
    cout << "Value of c2 is : ";
    oc2.display();

    exchange(oc1, oc2);

    cout << "The value after exchanging of c1 : ";
    oc1.display();
    cout << "The value after exchanging of c2 : ";
    oc2.display();

    return 0;
}
