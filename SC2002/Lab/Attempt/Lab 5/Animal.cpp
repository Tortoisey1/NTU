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

// Function implementation to get color input from the user
COLOR getColorInput()
{
    int colorInput;
    cout << "Enter a color number (0 = Green, 1 = Blue, 2 = White, 3 = Black, 4 = Brown): ";
    cin >> colorInput;

    // Validate the input
    if (colorInput < Green || colorInput > Brown)
    {
        cout << "Invalid color number!" << endl;
        return getColorInput(); // Recursive call for valid input
    }

    return static_cast<COLOR>(colorInput);
}

int main()
{
    // Animal a;
    // a.speak();

    // Animal b("cow", Black);

    // Mammal cow("cow", Green);
    // cow.speak();

    // Dog dog("doggy", Blue, "me");
    // dog.speak();
    // dog.move();

    // Animal *animalPtr = new Dog("Lassie", White, "Andy");
    // animalPtr->speak();
    // animalPtr->move();

    // delete animalPtr;

    // without virtual it uses animal method with virtual it uses the dog method

    // Dog dogi("Lassie", White, "Andy");
    // Mammal *aniPtr = &dogi;
    // Mammal &aniRef = dogi;
    // Mammal aniVal = dogi;
    // aniPtr->speak();
    // aniRef.speak();
    // aniVal.speak(); // this uses the animal speak method the rest uses the dog speak method

    int num = 0, i, choice;
    COLOR color;
    string name, owner;
    cout << "How many animals are you sending to the zoo?" << endl;
    cin >> num;

    if (num <= 0)
    {
        cout << "Too less animals!" << endl;
        return 0;
    }

    Mammal **mammals = new Mammal *[num];
    for (i = 0; i < num; i++)
    {
        cout << "Select the mammal to send to Zoo :" << endl;
        cout << "(1) Dog (2) Cat (3) Lion (4) Quit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "What's the dog name?" << endl;
            cin >> name;

            cout << "Whats the color for the dog?" << endl;
            color = getColorInput();

            cout << "Who's the dog owner?" << endl;
            cin >> owner;

            mammals[i] = new Dog(name, color, owner);
            break;

        case 2:
            cout << "What's the cat name?" << endl;
            cin >> name;

            cout << "Whats the color for the cat?" << endl;
            color = getColorInput();

            mammals[i] = new Cat(name, color);
            break;
        case 3:
            cout << "What's the lion name?" << endl;
            cin >> name;

            cout << "Whats the color for the lion?" << endl;
            color = getColorInput();

            mammals[i] = new Lion(name, color);
            break;

        default:
            break;
        }
    }

    cout << "(1) Move all animals" << endl;
    cin >> choice;
    if (choice == 1)
    {
        for (i = 0; i < num; i++)
        {
            mammals[i]->move();
        }
    }
    else
    {
        cout << "Invalid input" << endl;
    }

    delete mammals;
    cout << "Program exiting …. " << endl;
    return 0;
}
