#include <iostream>
#include <cmath>
using namespace std;

/*
Ans no. 1- I am using Multiple Inheritance.
Ans no. 2- I am use in Public mode.
Ans no. 3- I already do below.
Ans no. 4- code reusibility is implemented because I use Inheritance.
*/

class Simple_Calculator
{
protected:
    int num1, num2, plus, minus, multiply, devide;

public:
    int Simp_Calculator(int a, int b)
    {
        num1 = a;
        num2 = b;

        plus = num1 + num2;
        minus = num1 - num2;
        multiply = num1 * num2;
        devide = num1 / num2;
    }

    void display()
    {
        cout << "The addition is : " << plus << endl;
        cout << "The substraction is : " << minus << endl;
        cout << "The multiply is : " << multiply << endl;
        cout << "The devide is : " << devide << endl;
    }
};

class Scientific_Calculator
{
protected:
    int x, y;

public:
    int Science_Calculator(int a, int b)
    {
        x = a;
        y = b;

        cout << "The cube root of x is : " << (cbrt(x)) << endl;
        cout << "The cube root of y is : " << (cbrt(y)) << endl;
        cout << "The square root of x is : " << (sqrt(x)) << endl;
        cout << "The square root of y is : " << (sqrt(y)) << endl;
    }
};

class Hybrid_Calculator : public Simple_Calculator, public Scientific_Calculator
{
public:
    void thanks()
    {
        cout << "Thank You !" << endl;
    }
};

int main()
{

    Hybrid_Calculator obje;
    obje.Simp_Calculator(20, 2);
    obje.display();
    obje.Science_Calculator(9, 16);
    obje.thanks();

    return 0;
}