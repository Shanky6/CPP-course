#include <iostream>
using namespace std;

// class DerivedC: visibility-mode base1, visibility-mode base2
// {
//      Class body of class "DerivedC"
// };


class Base1
{
protected:
    int baseint1;

public:
    void set_baseint1(int a)
    {
        baseint1 = a;
    }
};

class Base2
{
protected:
    int baseint2;

public:
    void set_baseint2(int a)
    {
        baseint2 = a;
    }
};

class Base3
{
protected:
    int baseint3;

public:
    void set_baseint3(int a)
    {
        baseint3 = a;
    }
};

class DerivedC : public Base1, public Base2, public Base3
{
public:
    void show()
    {
        cout << "The value of baseint1 is: " << baseint1 << endl;
        cout << "The value of baseint2 is: " << baseint2 << endl;
        cout << "The value of baseint3 is: " << baseint3 << endl;
        cout << "The sum of these value is: " << baseint1 + baseint2 + baseint3 << endl;
    }
};

int main()
{
    DerivedC Shanky;
    Shanky.set_baseint1(25);
    Shanky.set_baseint2(70);
    Shanky.set_baseint3(45);
    Shanky.show();
    return 0;
}