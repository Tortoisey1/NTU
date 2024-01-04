#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[20];
    int age;
} Person;

void readData(Person *p);
Person findMiddleAge(Person *p);

int main()
{
    Person man[3], middle;

    readData(man);
    middle = findMiddleAge(man);
    printf("findMiddleAge(): %s %d\n", middle.name, middle.age);
    return 0;
}

void readData(Person *p)
{
    char buffer;
    int counter = 1;
    for (int i = 0; i < 3; i++)
    {
        printf("Enter person %d:\n", counter);
        scanf("%s %d", (p + i)->name, &((p + i)->age));

        counter++;
    }
}

Person findMiddleAge(Person *p)
{
    Person middle;
    int first = (p->age);
    int second = ((p + 1)->age);
    int third = ((p + 2)->age);

    int middleage;
    if (((first < second) && (first > third)) || ((first < third) && (first > second)))
    {
        strcpy(middle.name, p->name);
        middle.age = p->age;
    }
    else if (((first < second) && (second < third)) || ((third < second) && (second < first)))
    {
        strcpy(middle.name, (p + 1)->name);
        middle.age = (p + 1)->age;
    }
    else
    {
        strcpy(middle.name, (p + 2)->name);
        middle.age = (p + 2)->age;
    }
    return middle;
}