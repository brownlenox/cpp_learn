#include <iostream>
#include <string>
using namespace std;

// switch
int main()
{
    int day = 4;
    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
    default:
        cout << "Day doesn't exist";
    }
}