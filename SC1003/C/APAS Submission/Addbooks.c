#include <stdio.h>
#include <string.h>
#include <math.h>

const int MAX = 5;
int counter = 0;

typedef struct
{
    int bookID; // Unique
    char title[40];
    char author[40];
    double price;
    int quantity;
} Book;

void addBook(Book list[]);
int checkexist(Book *list, int target);

int main(void)
{
    Book shop[MAX];
    Book *shoppointer = shop;
    int choice;

    printf("NTU BOOKSHOP MANAGEMENT PROGRAM:\n");
    printf("1: listBooks()\n");
    printf("2: addBook()\n");
    printf("3: removeBook()\n");
    printf("4: findBook()\n");
    printf("5: updateBook()\n");
    printf("6: quit\n");

    do
    {
        printf("Enter you choice:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 2:
            printf("addBook():\n");
            addBook(shop);
            break;
        }
    } while (choice != 6);

    return 0;
}

void addBook(Book *list)
{
    int target, exist, quantity;
    double price;
    char title[40], author[40], *p, dummy;

    printf("Enter bookID:\n");
    scanf("%d", &target);
    exist = checkexist(list, target);

    scanf("%c", &dummy);

    printf("Enter book title:\n");
    fgets(title, 40, stdin);
    if (p = strchr(title, '\n'))
        *p = '\0';

    printf("Enter author name:\n");
    fgets(author, 40, stdin);
    if (p = strchr(author, '\n'))
        *p = '\0';

    printf("Enter price:\n");
    scanf("%lf", &price);

    printf("Enter quantity:\n");
    scanf("%d", &quantity);

    if (exist) // check full
    {
        printf("The bookID has already existed! Unable to addBook()\n");
    }
    else if (counter == MAX) // add book
    {
        printf("The bookshop is full! Unable to addBook()\n");
    }
    else
    {
        (list + counter)->bookID = target;
        strcpy((list + counter)->title, title);
        strcpy((list + counter)->author, author);
        (list + counter)->price = price;
        (list + counter)->quantity = quantity;

        counter++;
        printf("The book has been added successfully\n");
    }
}

int checkexist(Book *list, int target)
{
    for (int i = 0; i < counter + 1; i++)
    {
        if ((list + i)->bookID == target)
        {
            return 1;
        }
    }
    return 0;
}