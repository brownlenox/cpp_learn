/*
public - members are accessible from outside the class
private - members cannot be accessed (or viewed) from outside the class
protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes. You will learn more about Inheritance later.
*/

#include <iostream>
using namespace std;

class MyClass
{
public:    // Public access specifier
    int x; // Public attribute
private:   // Private access specifier
    int y; // Private attribute
};

int main()
{
    MyClass myObj;
    myObj.x = 25; // Allowed (x is public)
    myObj.y = 50; // Not allowed (y is private)
    return 0;
}

// Note: By default, all members of a class are private if you don't specify an access specifier:

// i.e
/*
class MyClass {
  int x;   // Private attribute
  int y;   // Private attribute
};
*/
