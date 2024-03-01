#include <iostream>
#include <string>
using namespace std;

void myFunction(string fname)
{
    cout << fname << " Ogutu\n";
}

int main()
{
    myFunction("Lenox");
    myFunction("Charles");
}

// default parameters
void myFunction2(string country = "Kenya")
{
    cout << country << "\n";
}

int main()
{
    myFunction2("Tanzania");
    myFunction2();
    myFunction2("Uganda");
    return 0;
}

// multiple parameters

void myFunction3(string fname, int age)
{
    cout << fname << " Brown is " << age << " years old. \n";
}

int main()
{
    myFunction3("Lenox", 21);
    myFunction3("Faith", 19);
    return 0;
}

// return values

int myFunction4(int x, int y)
{
    return x + y;
}

int main()
{
    int z = myFunction4(3, 5);
    cout << z;
    return 0;
} // it outputs 8 (5+3)

// pass by reference
void swapNums(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}

int main()
{
    int firstNum = 10;
    int secondNum = 20;

    cout << "Before swap: "
         << "\n";
    cout << firstNum << secondNum << "\n";

    // Call the function, which will change the values of firstNum and secondNum
    swapNums(firstNum, secondNum);

    cout << "After swap: "
         << "\n";
    cout << firstNum << secondNum << "\n";

    return 0;
}

// pass arrays
void myFunction5(int myNumbers[5])
{
    for (int i = 0; i < 5; i++)
    {
        cout << myNumbers[i] << "\n";
    }
}

int main()
{
    int myNumbers[5] = {10, 20, 30, 40, 50};
    myFunction5(myNumbers);
    return 0;
}
