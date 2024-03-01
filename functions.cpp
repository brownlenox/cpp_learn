#include <iostream>
#include <string>
using namespace std;

void myFunction()
{
    cout << "Am learning c++";
}

int main()
{
    myFunction();
    return 0;
}

// a function can as well be executed multiple times

void myFunction1()
{
    cout << "Am learning c++\n";
}

int main()
{
    myFunction1();
    myFunction1();
    myFunction1();
    return 0;
}