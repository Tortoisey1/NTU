// Checks if childanimal IF DECLARED
#ifndef _CHILDANIMAL_

// Defines _ANIMALS_ if above
// conditions fails
#define _CHILDANIMAL_

#include <iostream>
#include <string>
#include "animal.h"
using namespace std;

class Dog : public Mammal
{
private:
    string owner;

public:
    Dog(string n, COLOR c, string o) : Mammal(n, c), owner(o)
    {
        cout << "constructing Dog object owned by " << owner << endl;
    }

    ~Dog()
    {
        cout << "destructing Dog object " << endl;
    }

    void speak() const
    {
        cout << "Dog woofs" << endl;
    }

    void move() const
    {
        cout << "Dog moves" << endl;
    }
};

class Cat : public Mammal
{
private:
public:
    Cat(string n, COLOR c) : Mammal(n, c)
    {
        cout << "constructing Cat object" << endl;
    }

    ~Cat()
    {
        cout << "destructing Cat object " << endl;
    }
    void move() const
    {
        cout << "Cat moves" << endl;
    }
    void speak() const
    {
        cout << "Cat meows" << endl;
    }
};

class Lion : public Mammal
{
private:
public:
    Lion(string n, COLOR c) : Mammal(n, c)
    {
        cout << "constructing Lion object" << endl;
    }

    ~Lion()
    {
        cout << "destructing Lion object " << endl;
    }
    void move() const
    {
        cout << "Lion moves" << endl;
    }
    void speak() const
    {
        cout << "Lion roars" << endl;
    }
};

#endif