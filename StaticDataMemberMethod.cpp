#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count; // This is Static variable

public:
    void setdata(void)
    {
        cout << "Enter your Id : ";
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "The Id of this employee is : " << id << endl
             << "This employee number is : " << count << endl;
    }
    static void getCount(void)
    {
        // cout<<id; // This throw an error because static function only allows for static variables.
        cout << "The value of count is : " << count << endl;
    }
};
// count is static data member of this class Employee.
int Employee::count; // default value of this static count is 0.

int main()
{

    /* shanky.id=1;
     shanky.count=1;   this is wrong statement becouse id and count is private functions */

    Employee shanky, harry, rupes;

    shanky.setdata();
    shanky.getdata();
    Employee::getCount();

    harry.setdata();
    harry.getdata();
    Employee::getCount();

    rupes.setdata();
    rupes.getdata();
    Employee::getCount();

    return 0;
}