
// Checks if _ANIMALS IF DECLARED
#ifndef _ANIMALS_

// Defines _ANIMALS_ if above
// conditions fails
#define _ANIMALS_

#include <iostream>
#include <string>
using namespace std;
enum COLOR
{
    Green,
    Blue,
    White,
    Black,
    Brown
};

string colorString(COLOR c)
{
    switch (c)
    {
    case Green:
        return "Green";

    case Blue:
        return "Blue";

    case White:
        return "White";

    case Black:
        return "Black";

    case Brown:
        return "Brown";

    default:
        return "Unkown Color";
    }
}

class Animal
{
public:
    Animal() : _name("unknown")
    {
        cout << "constructing Animal object " << _name << endl;
    }
    Animal(string n, COLOR c) : _name(n), _color(c)
    {
        cout << "constructing Animal object called " << _name << " which is " << colorString(_color) << endl;
    }

    ~Animal()
    {
        cout << "destructing Animal object " << _name << endl;
    }
    virtual void speak() const
    {
        cout << "Animal speaks " << endl;
    }
    virtual void move() const = 0;

private:
    string _name;
    COLOR _color;
};

class Mammal : public Animal
{
private:
public:
    Mammal() : Animal()
    {
        cout << "constructing Mammal object " << endl;
    }

    Mammal(string n, COLOR c) : Animal(n, c)
    {
        cout << "constructing Mammal object " << endl;
    }

    ~Mammal()
    {
        cout << "destructing Mammal object " << endl;
    }

    void eat() const
    {
        cout << "Mammal eat " << endl;
    }

    void move() const
    {
        cout << "Mammal moves" << endl;
    }
};

#endif