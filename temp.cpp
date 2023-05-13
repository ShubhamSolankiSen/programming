#include <iostream>
using namespace std;

template <class T>
class vector
{
public:
    int size;
    T *arr;

    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotproduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    vector<int> v1(3);
    v1.arr[0] = 7;
    v1.arr[1] = 9;
    v1.arr[3] = 3;

    vector<int> v2(3);
    v2.arr[0] = 7;
    v2.arr[1] = 9;
    v2.arr[2] = 7;

    int a = v1.dotproduct(v2);
    cout<<a<<endl;

        return 0;
}