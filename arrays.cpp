#include <iostream>
#include <string>
using namespace std;

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