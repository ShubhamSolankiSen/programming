#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "The id of this employee is " << id << "and this is employee number " << count << endl;
    }
    static void getcount(void)
    {
        cout << "the value of count is " << count << endl;
    }
};
int Employee ::count; // default value is 0
int main()
{
    Employee harry, shubham, rahul;
    // harry.id = 1;
    // harry.count = 1; //cannot do this as id and count are private
    harry.setdata();
    harry.getdata();
    Employee::getcount();

    shubham.setdata();
    shubham.getdata();
    Employee::getcount();
    rahul.setdata();
    rahul.getdata();
    Employee::getcount();
    return 0;
}
