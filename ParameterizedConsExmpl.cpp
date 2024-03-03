#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    void displayPoint()
    {
        cout << "The Point is : (" << x << "," << y << ")" << endl;
    }

    friend void distanceLine(Point o1, Point o2);
};

void distanceLine(Point o1, Point o2)
{
    float dist;
    dist = sqrt(pow(o2.x - o1.x, 2) + pow(o2.y - o1.y, 2));
    cout << "The distance between these two line is : " << dist << endl;
    cout << endl;
}
int main()
{
    Point p(1, 1);
    p.displayPoint();
    Point q(4, 6);
    q.displayPoint();

    distanceLine(p, q);

    Point a1(1, 1);
    a1.displayPoint();
    Point b1(1, 1);
    b1.displayPoint();

    distanceLine(a1, b1);

    Point a2(0, 1);
    a2.displayPoint();
    Point b2(0, 6);
    b2.displayPoint();

    distanceLine(a2, b2);

    Point a3(1, 0);
    a3.displayPoint();
    Point b3(70, 0);
    b3.displayPoint();

    distanceLine(a3, b3);

    Point inp1();
    Point inp2();




    return 0;
}