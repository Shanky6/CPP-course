#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_roll_no(int);
    void get_roll_no(void);
};

void Student ::set_roll_no(int r)
{
    roll_no = r;
}

void Student ::get_roll_no(void)
{
    cout << "Your roll no. is: " << roll_no << endl;
}

class Exam : public Student
{
protected:
    int maths;
    int physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void Exam ::get_marks(void)
{
    cout << "Marks of maths are: " << maths << endl;
    cout << "Marks of physics are: " << physics << endl;
}

class Reasult : public Exam
{
public:
    void display_reasults();
};

void Reasult :: display_reasults()
{
    get_roll_no();
    get_marks();
    cout << "Your Reasult is: " << (maths + physics) / 2 << "%" << endl;
}

int main()
{
    Reasult shanky;
    shanky.set_roll_no(12);
    shanky.set_marks(87.0, 97.0);
    shanky.display_reasults();

    /*
    Notes :
        If we are Inheriting B from A and C from B : [A-->B-->C]
        1. A is the base class for B and B is the base class for C.
        2. A-->B-->C is called inheritance path.
    */
    return 0;
}