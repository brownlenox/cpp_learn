#include <iostream>
#include <string>
using namespace std;

// Base class
class Animal
{
public:
    void AnimalSound()
    {
        cout << "The anima\ makes a sound \n";
    }
};

class Pig : public Animal
{
public:
    void AnimalSound()
    {
        cout << "The pig says: wee wee \n";
    }
};

class Dog : public Animal
{
public:
    void AnimalSound()
    {
        cout << "The dog says: bow bow \n";
    }
};

int main()
{
    Animal myAnimal;
    Dog myDog;
    Pig myPig;

    myAnimal.AnimalSound();
    myDog.AnimalSound();
    myPig.AnimalSound();
    return 0;
}