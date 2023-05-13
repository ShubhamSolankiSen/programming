#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // connecvbting our file with sout stream
    ofstream sout("tut61.txt");

    // creating a name string and filling it with the entered by the user
    string name;
    cout << "Enter your name: ";
    cin >> name;

    // writing a string to the file
    sout << "My name is " + name;
    sout.close();

    ifstream sin("tut61.txt");
    string content;
    sin >> content;
    cout << "The content  of this file is :" << content;
    sin.close();
    return 0;
}