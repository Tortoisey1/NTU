#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

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

void listBooks(Book *list);
int linearsearch(Book *list, char targettitle[40], char targetauthor[40]);
void toLower(char *list);
void DisplayBook(Book *list, int targetID);
void updateBook(Book *list);
void updatelist(Book *list, double newprice, int newquantity, int targetID);

int main(void)
{
    Book shop[MAX];
    Book *shoppointer = shop;
    int choice;
    char *dummy;

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
        case 1:
            printf("listBooks():\n");
            listBooks(shop);
            break;

        case 5:
            printf("updateBook():\n");
            updateBook(shop);
            break;
        }
    } while (choice != 6);

    return 0;
}

void updateBook(Book *list)
{
    char targettitle[40], targetauthor[40], dummy, *p;
    int targetID, newquantity;
    double newprice;

    scanf("%c", &dummy);
    printf("Enter the target book title:\n");
    fgets(targettitle, 40, stdin);
    if (p = strchr(targettitle, '\n'))
        *p = '\0';

    printf("Enter the target author name:\n");
    fgets(targetauthor, 40, stdin);
    if (p = strchr(targetauthor, '\n'))
        *p = '\0';

    if (counter == 0)
    {
        printf("The target book is not in the bookshop\n");
    }
    else
    {
        // find book
        targetID = linearsearch(list, targettitle, targetauthor);
        if (targetID == 0)
        {
            printf("The target book is not in the bookshop\n");
        }
        else
        {
            printf("Enter updated book price:\n");
            scanf("%lf", &newprice);

            printf("Enter updated quantity:\n");
            scanf("%d", &newquantity);

            // update the book
            updatelist(list, newprice, newquantity, targetID);

            printf("The target book is updated\n");
            // List removed book
            DisplayBook(list, targetID);
        }
    }
}

int linearsearch(Book *list, char targettitle[40], char targetauthor[40])
{
    // target lower

    toLower(targettitle);
    toLower(targetauthor);
    for (int i = 0; i < counter; i++)
    {
        // change to lower
        char sourcetitle[40], sourceauthor[40];
        strcpy(sourcetitle, (list + i)->title);
        toLower(sourcetitle);

        strcpy(sourceauthor, (list + i)->author);
        toLower(sourceauthor);
        // compare
        int title, author;

        title = strcmp(sourcetitle, targettitle);
        author = strcmp(sourceauthor, targetauthor);

        if (!title && !author)
        {
            // return bookID
            return ((list + i)->bookID);
        }
    }

    return 0;
}

void toLower(char *list)
{
    for (; *list; ++list)
    {
        *list = tolower(*list);
    }
}

void DisplayBook(Book *list, int targetID)
{

    for (int i = 0; i < counter; i++)
    {
        if ((list + i)->bookID == targetID)
        {
            printf("BookID: %d\n", (list + i)->bookID);
            printf("Book title: %s\n", (list + i)->title);
            printf("Author name: %s\n", (list + i)->author);
            printf("Book price: %.2lf\n", (list + i)->price);
            printf("Quantity: %d\n", (list + i)->quantity);
            return;
        }
    }
}

void listBooks(Book *list)
{
    if (counter == 0)
    {
        printf("The bookshop is empty\n");
    }
    else
        for (int i = 0; i < counter; i++)
        {
            printf("BookID: %d\n", (list + i)->bookID);
            printf("Book title: %s\n", (list + i)->title);
            printf("Author name: %s\n", (list + i)->author);
            printf("Book price: %.2lf\n", (list + i)->price);
            printf("Quantity: %d\n", (list + i)->quantity);
        }
}

void updatelist(Book *list, double newprice, int newquantity, int targetID)
{
    for (int i = 0; i < counter; i++)
    {
        if ((list + i)->bookID == targetID)
        {
            (list + i)->price = newprice;
            (list + i)->quantity = newquantity;
            return;
        }
    }
}