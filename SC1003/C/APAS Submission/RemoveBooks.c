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
void removeBook(Book *list);
int linearsearch(Book *list, char targettitle[40], char targetauthor[40]);
void toLower(char *list);
void DisplayBook(Book *list, int targetID);
void newlist(Book *list, int targetID);
void merge(Book *list, Book *left, Book *right, int nL, int nR);
void mergesort(Book *list, int n);
void copy(Book *source, Book *target, int i, int j);

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

        case 3:
            printf("removeBook():\n");
            // remove book
            removeBook(shop);
            // sort updated removed list
            mergesort(shoppointer, counter);
            break;
        }
    } while (choice != 6);

    return 0;
}

void removeBook(Book *list)
{
    char targettitle[40], targetauthor[40], dummy, *p;
    int targetID;

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
        printf("The bookshop is empty\n");
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
            printf("The target book is removed\n");
            // List removed book
            DisplayBook(list, targetID);
            // update list without removed book
            newlist(list, targetID);
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

void newlist(Book *list, int targetID)
{
    Book temp[counter - 1];
    Book *tempointer = temp;
    int j = 0;

    for (int i = 0; i < counter; i++)
    {
        if ((list + i)->bookID != targetID)
        {
            (tempointer + j)->bookID = (list + i)->bookID;
            strcpy((tempointer + j)->title, (list + i)->title);
            strcpy((tempointer + j)->author, (list + i)->author);
            (tempointer + j)->price = (list + i)->price;
            (tempointer + j)->quantity = (list + i)->quantity;

            j++;
        }
    }

    counter--;
    for (int i = 0; i < counter; i++)
    {
        (list + i)->bookID = (tempointer + i)->bookID;
        strcpy((list + i)->title, (tempointer + i)->title);
        strcpy((list + i)->author, (tempointer + i)->author);
        (list + i)->price = (tempointer + i)->price;
        (list + i)->quantity = (tempointer + i)->quantity;
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

void merge(Book *list, Book *left, Book *right, int nL, int nR)
{
    int k = 0, i = 0, j = 0;

    while (i < nL && j < nR)
    {
        if ((left + i)->bookID <= (right + j)->bookID)
        {
            copy(left, list, i++, k++);
        }
        else
        {
            copy(right, list, j++, k++);
        }
    }

    while (i < nL)
    {
        copy(left, list, i++, k++);
    }

    while (j < nR)
    {
        copy(right, list, j++, k++);
    }
}

void mergesort(Book *list, int n)
{
    if (n < 2)
        return;
    int middle = n / 2;
    Book left[middle];
    Book right[n - middle];
    Book *leftpointer = left;
    Book *rightpointer = right;

    for (int i = 0; i < middle; i++)
    {
        copy(list, leftpointer, i, i);
    }

    for (int i = middle; i < n; i++)
    {
        copy(list, rightpointer, i, i - middle);
    }

    // sort left
    mergesort(leftpointer, middle);

    // sort right
    mergesort(rightpointer, n - middle);

    // merge left and right
    merge(list, leftpointer, rightpointer, middle, n - middle);
}

void copy(Book *source, Book *target, int i, int j)
{

    // copy bookID
    (target + j)->bookID = (source + i)->bookID;

    // copy title
    strcpy((target + j)->title, (source + i)->title);

    // copy author
    strcpy((target + j)->author, (source + i)->author);

    // copy price
    (target + j)->price = (source + i)->price;

    // copy quantity
    (target + j)->quantity = (source + i)->quantity;
}