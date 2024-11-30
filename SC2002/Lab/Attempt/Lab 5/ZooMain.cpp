#include <iostream>
#include <string>
#include "animal.h"
#include "childAnimal.h"
using namespace std;
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
            mammals[i]->eat();
            mammals[i]->speak();
        }
    }
    else
    {
        cout << "Invalid input" << endl;
    }

    // Deleting each individual object
    for (i = 0; i < num; i++)
    {
        delete mammals[i]; // This will call the destructor for each animal object
    }
    delete[] mammals; // This deallocates the array of pointers

    cout << "Program exiting …. " << endl;
    return 0;
}
