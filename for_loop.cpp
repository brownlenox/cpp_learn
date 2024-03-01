#include <iostream>
#include <string>
using namespace std;

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        cout << i << "\n";
    }
    return 0;
}

// for loop
int main()
{
    for (int i = 1; i <= 2; ++i)
    {
        cout << "Outer: " << i << "\n"; // executes twice

        for (int j = 1; j <= 3; ++j)
        {
            cout << " Inner: " << j << "\n"; // executes six times (2 * 3)
        }
    }
}

// foreach
int main()
{
    int myNummbers[5] = {10, 20, 30, 40, 50};
    for (int i : myNummbers)
    {
        cout << i << "\n";
    }
}

// break in for loop
int main()
{
    for (int i = 0; i <= 10; i++)
    {
        if (i == 4)
        {
            break;
        }
        cout << i << "\n";
    }
    return 0;
}

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        if (i == 4)
        {
            continue;
        }
        cout << i << "\n";
    }
    return 0;
}