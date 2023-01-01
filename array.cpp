#include <iostream>
using namespace std;

class Employee
{
    int Id;
    int salary;
    int count;

public:
    void setId()
    {
        salary = 122;
        cout << "Enter the id of Employee " << endl;
        cin >> Id;
        cout << "Enter the count of Employee  " << endl;
        cin >> count;
    }
    void getId()
    {
        cout << "The Id of this Employee is " << Id << endl;
        cout << "The count of this Employee is" << endl;
    }
};

int main()
{
    Employee harry, shubham, rahul;
    harry.setId();
    harry.getId();

    shubham.setId();
    shubham.getId();

    rahul.setId();
    rahul.getId();

    return 0;
}