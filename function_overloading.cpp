// With function overloading, multiple functions can have the same name with different parameters:
// Note: Multiple functions can have the same name as long as the number and/or type of parameters are different.

#include <iostream>
#include <string>
using namespace std;

int plusFunction(int x, int y)
{
    return x + y;
}

double plusFunction(double x, double y)
{
    return x + y;
}

int main()
{
    int myNum1 = plusFunction(8, 10);
    double myNum2 = plusFunction(6.5, 8.35);
    cout << "Int: " << myNum1 << "\n";
    cout << "Double: " << myNum2 << "\n";
    return 0;
}