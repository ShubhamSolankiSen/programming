#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out;
    out.open("tut62.txt");
    out << "Shubham Solanki";
    out.close();

    ifstream in;
    string st, st2;
    in.open("tut62.txt");
    in >> st >> st2;
    cout << st << st2;
    in.close();

    return 0;
}