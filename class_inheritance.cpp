#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle
{
public:
    string brand = "Ford";
    void honk()
    {
        cout << "Honk, honk! \n";
    }
};

// Derived class
class Car : public Vehicle
{
public:
    string model = "Mustang";
};

int main()
{
    Car myCar;
    myCar.honk();
    cout << myCar.brand + " " + myCar.model;
    return 0;
}

/*
Multilevel Inheritance
A class can also be derived from one class, which is already derived from another class.

In the following example, MyGrandChild is derived from class MyChild (which is derived from MyClass).
*/

class MyClass
{
public:
    void myFunction()
    {
        cout << "I'm stil learning.";
    }
};

// Child class
class Mychild : public MyClass
{
};

// Grandchild class
class MyGrandChild : public Mychild
{
};

int main()
{
    MyGrandChild myObj;
    myObj.myFunction();
    return 0;
}

/*
Multiple Inheritance
A class can also be derived from more than one base class, using a comma-separated list:
*/

// base class
class MyClass
{
public:
    void myFunction()
    {
        cout << "My first statement";
    }
};

// My other base class
class MyOtherClass
{
public:
    void myOtherFunction()
    {
        cout << "My second statement";
    }
};

class MyChildClass : public MyClass, public MyOtherClass
{
};

int main()
{
    MyChildClass myObj;
    myObj.myFunction();
    myObj.myOtherFunction();
    return 0;
}

// using the protected access specifier

// Base class
class Employee
{
protected: // protected access specifier
    int salary;
};

// Derived class
class Programmer : public Employee
{
public:
    int bonus;
    void setSalary(int s)
    {
        salary = s;
    }
    int getSalary()
    {
        return salary;
    }
};

int main()
{
    Programmer myObj;
    myObj.setSalary(50000);
    myObj.bonus = 15000;
    cout << "Salary: " << myObj.getSalary() << "\n";
    cout << "Bonus: " << myObj.bonus << "\n";
    return 0;
}