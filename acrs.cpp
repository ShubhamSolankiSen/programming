#include <iostream>
using namespace std;

int main()
{
    // find area,circle,rectangle,square using switch case:
    int choice;
    float area, radius, length, width, side;

    cout << "Enter your choice:" << endl;
    cout << "1.Circle " << endl;
    cout << "2.Rectangular " << endl;
    cout << "3.Square " << endl;
    cin >> choice;

    switch (choice)
        {
case 1:

    cout << "Enter radius of circle:" << endl;
    cin >> radius;
    area = 3.14 * radius * radius;
    cout << "area of circle = " << area;
    break;

case2:

cout<<"Enter length and width of rectangle:"<<endl;
cin>>length>>width;
area  = length * width;

cout<<"area of rectangle = "<<area;
break;

case 3:

cout<<"Enter side of square:"<<endl;
cin>>side;
area = side * side;
cout<<"area of square = "<<area;
break;

default:

cout<<"Invalid choice :"<<endl;
        }
        return 0;
}


    