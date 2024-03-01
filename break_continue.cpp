#include <iostream>
#include <string>
using namespace std;

// break & continue in while loop
int main()
{
    int i = 0;
    while (i < 10)
    {
        cout << i << "\n";
        i++;
        if (i == 4)
        {
            break;
        }
    }
}

int main()
{
    int i = 0;
    while (i < 10)
    {
        cout << i << "\n";
        i++;
        if (i == 4)
        {
            continue;
        }
    }
    return 0;
}