#include <iostream>
using namespace std;

class Shopitem
{
    int Id;
    float Price;

public:
    void setdata(int a, float b)
    {
        Id = a;
        Price = b;
    }
    void getdata()
    {
        cout << " Code of this item is  " << Id << endl;
        cout << " Price of this item is " << Price << endl;
    }
};
int main()
{
    int size = 3;
    int p, i;
    float q;
    Shopitem *ptr = new Shopitem[size];
    Shopitem *ptrTemp = ptr;

    for (i = 0; i < size; i++)
    {
        cout << " Enter the Id and Price of item" << i + 1 << endl;

        cin >> p >> q;
        (*ptr).setdata(p, q);
        ptr++;
    }

    for (i = 0; i < size; i++)
    {
        cout << "Item number:" << i + 1<<endl;
        (*ptrTemp).getdata();
        ptrTemp++;
        return 0;
    }
}