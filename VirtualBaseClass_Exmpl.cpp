#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_roll_no(int r)
    {
        roll_no = r;
    }
    void print_number(void)
    {
        cout << "Your Roll Number is: " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float math, physics;

public:
    void set_marks(float m, float p)
    {
        math = m;
        physics = p;
    }
    void print_marks(void)
    {
        cout << "Your marks in Mathematics: " << math << endl;
        cout << "Your marks in Physics: " << physics << endl;
    }
};
 
class Sports : virtual public Student
{
protected:
    int score;

public:
    void set_score(int s)
    {
        score = s;
    }
    void print_score(void)
    {
        cout << "Your score in PT is: " << score << endl;
    }
};

class Result : public Test, public Sports
{
protected:
    float total;

public:
    void display(void)
    {
        total = math + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "Your overall total score is: " << total << endl;
    }
};

int main()
{
    Result Shanky;
    Shanky.set_roll_no(12);
    Shanky.set_marks(95.0, 85.0);
    Shanky.set_score(10);
    Shanky.display();
    return 0;
}