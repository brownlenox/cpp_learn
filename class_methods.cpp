#include <iostream>
using namespace std;

class Student
{
public:
    int marks(int maxMarks);
};

int Student::marks(int maxMarks)
{
    return maxMarks;
}

int main()
{
    Student myObj;           // create an object of student
    cout << myObj.marks(80); // call the method with an argument
    return 0;
}