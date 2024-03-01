/* Recursion is the technique of making a function call itself. This technique provides a way to break complicated problems down into simple problems which are easier to solve.

Recursion may be a bit difficult to understand. The best way to figure out how it works is to experiment with it.
*/

#include <iostream>
using namespace std;

int sum(int k)
{
    if (k > 0)
    {
        return k = sum(k - 1);
    }
    else
    {
        return 0;
    }
}

int main()
{
    int result = sum(10);
    cout << result;
    return 0;
}