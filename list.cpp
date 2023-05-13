#include <iostream>
#include <list>

using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    // list 1 is 0 length of list
    list<int> list1;
    list1.push_back(4);
    list1.push_back(3);
    list1.push_back(8);
    list1.push_back(9);
    list1.push_back(6);

    // sorting the list 
    // list1.sort();
    
    // reversing the list
    // list1.reverse();
    
    display(list1);

    // Removing elements from the list

    // list1.pop_back();
    // display(list1);
    // list1.pop_front();
    // display(list1);
    // list1.remove(9);
    // display(list1);

    // list<int>:: iterator iter;
    // iter = list1.begin();
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";

    // list 2 is an empty list of size 4
    list<int> list2(4);
    list<int>::iterator iter;
    iter = list2.begin();

    *iter = 55;
    iter++;

    *iter = 67;
    iter++;

    *iter = 22;
    iter++;

    *iter = 98;
    iter++;
    display(list2);

    list1.sort();
    list2.sort();

    list1.merge(list2);
    cout << "After merging list1" << endl;
    display(list1);

    return 0;
}