#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{

    map<string, int> mapMarks;
    mapMarks["Shubham Solanki "] = 99;
    mapMarks["Shubham Nagda "] = 65;
    mapMarks[" Priyansh Prajapat "] = 88;

    map<string, int>::iterator iter;
    for (iter = mapMarks.begin(); iter != mapMarks.end(); iter++)
    {
        cout <<(*iter).first<<" "<<(*iter).second<<" \n ";
    }

    return 0;
}