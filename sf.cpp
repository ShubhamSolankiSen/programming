#include <iostream>
using namespace std;

class Employee
{
    int Id;
    static int Count;

public:
    void setdata(void)
    {
        cout << "Enter the Id" << endl;
        cin >> Id;
        count++;
    }
    void getdata(void)
    {
        cout << "the Id of this Employee is " << Id << "and this is Employee number" << count << endl;
    }
    static void getcount(void){
        cout<<"The value of count is "<<count<<endl;;
    }
    int Employee::count;
};
int main()
{
    Employee harry, shubham, rahul;
    harry.setdatda();
    harry.getdatda();
    Employee::getcount();

    shubham.setdatda();
    shubham.getdatda();
    Employee::getcount();

    rahul.setdatda();
    rahul.getdatda();
    Employee::getcount();

    return 0;
}