#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        cout << "Enter the id of this Employee : ";
        cin >> id;
    }

    void getId(void)
    {
        cout << "Id of this Employee is : " << id << endl;
    }
};

int main()
{
    // Employee Shubham,Shanky,Bhuvan,Ramesh;
    // Shanky.setId();
    // Shanky.getId();

    Employee Google[4];
    for (int i = 0; i < 4; i++)
    {
        Google[i].setId();
        Google[i].getId();
    }

    return 0;
}