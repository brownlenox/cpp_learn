#include <iostream>
#include <string>
using namespace std;

// A reference variable is a "reference" to an existing variable, and it is created with the & operator:
int main()
{
    string food = "Pizza";
    string &meal = food;

    cout << food << "\n";
    cout << meal << "\n";
    return 0;
}

// memory address
int main()
{
    string food = "Pizza";

    cout << &food; // Outputs the memory address of food (0x6dfed4)
    return 0;
}