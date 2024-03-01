#include <iostream>
#include <string>
using namespace std;

int main()
{
    /* The code below willprint Hello World!
    It is my first C++ project */
    int myNum = 20;           // Integer (whole number without decimals)
    double myFloatNum = 5.99; // Floating point number (with decimals)
    char myLetter = 'D';      // Character
    string myText = "Hello";  // String (text)
    bool myBoolean = true;    // Boolean (true or false)
    const int myAge = 21;
    int age = 16;
    string adult = (age > 18) ? "Is adult" : "Still a child";
    // can also be written as
    if (age > 18)
    {
        cout << "Is adult";
    }
    else
    {
        cout << "Still a cild";
    }
    int day = 4;
    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    default:
        cout << "There are 7 days in a week";
    }
    cout << adult;
    myNum = 21;
    cout << "My age is " << myAge << "old";
    cout << myNum; // outputs 10
    cout << "Hello World!" << endl;
    cout << "Hio ni jaba \n"; // This is a comment

    // adding variables
    string greeting = "Hello";
    cout << greeting;
    int x = 10;
    int y = 15;
    int sum = x + y;
    cout << sum;
    return 0;
}

// if else
int main()
{
    int i = 10;
    if (i <= 10)
    {
        cout << "The boy is bright";
    }
    else if (i <= 20)
    {
        cout << "The boy is clever";
    }
    else
    {
        cout << "This boy is outstanding";
    }
}

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
// while loop
int main()
{

    int i = 0;
    while (i < 5)
    {
        cout << i << "\n";
        i++;
    }
    return 0;
}

// do while loop
int main()
{
    int i = 0;
    do
    {
        cout << i << "\n";
        i++;
    } while (i < 5);
    return 0;
}

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
}

// changing stuff in arrays
int main()
{
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cars[0] = "Opel";
    cout << cars[0];
    // Now outputs Opel instead of Volvo
    return 0;
}

// arrays and loops
int main()
{

    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    for (int i = 0; i < 5; i++)
    {
        cout << i << " = " << cars[i] << "\n";
    }

    int myNumbers[5] = {10, 20, 30, 40, 50};
    // for (int i = 0; i < sizeof(myNumbers) / sizeof(int); i++)
    for (int i = 0; i < 5; i++)
    {
        cout << myNumbers[i] << "\n";
    }

    // foreach example
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i : myNumbers)
    {
        cout << i << "\n";
    }
}

// size of an array
int main()
{
    int myNumbers[5] = {10, 20, 30, 40, 50};
    int getArrayLength = sizeof(myNumbers) / sizeof(int);
    cout << getArrayLength;
    return 0;
}

// multidimensional arrays
int main()
{

    string letters[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}};
    letters[0][0] = "Z";

    cout << letters[0][0]; // Now outputs "Z" instead of "A"

    // looping
    string letters[2][2][2] = {
        {{"A", "B"},
         {"C", "D"}},
        {{"E", "F"},
         {"G", "H"}}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                cout << letters[i][j][k] << "\n";
            }
        }
    }
}