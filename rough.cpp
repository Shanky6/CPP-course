#include <iostream>
using namespace std;

class ComplexNumber {
private:
    double real;
    double imag;

public:
    ComplexNumber(double r, double i) {
        real = r;
        imag = i;
    }

    void display() {
        if (imag < 0)
            cout << real << " - " << -imag << "i" << endl;
        else
            cout << real << " + " << imag << "i" << endl;
    }

    ComplexNumber operator+(const ComplexNumber& c) {
        ComplexNumber temp(0, 0);
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main() {
    // ComplexNumber c3();
    // ComplexNumber c1(2, 3);
    // ComplexNumber c2(4, -5);

    // cout << "First complex number: ";
    // c1.display();

    // cout << "Second complex number: ";
    // c2.display();

    // ComplexNumber sum = c1 + c2;
    // cout << "Sum of the two complex numbers: ";
    // sum.display();



    int n = 3;
    int k;
    int x = 0;
    int y = 0;
    int p = 0;
    int q = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           k = j;
           k++;
           x = y + j;
           x++;
        }
           p = q + i;
           p++;
        ;
    }

  cout<<"Total times take by this algo is : "<<(x * p)<<endl;  

    return 0;
}