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
void listBooks(Book *list);
void merge(Book *list, Book *left, Book *right, int nL, int nR);
void mergesort(Book *list, int n);
void copy(Book *source, Book *target, int i, int j);

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
        case 1:
            printf("listBooks():\n");
            listBooks(shoppointer);
            break;
        case 2:
            printf("addBook():\n");
            addBook(shop);
            mergesort(shoppointer, counter);
            break;
        }
    } while (choice != 6);

    return 0;
}

void addBook(Book *list)
{
    if (counter == MAX) // check full
    {
        printf("The bookshop is full! Unable to addBook()\n");
    }
    else // add book
    {
        int target, exist, quantity;
        double price;
        char title[40], author[40], *p, dummy;

        printf("Enter bookID:\n");
        scanf("%d", &target);
        exist = checkexist(list, target);
        if (exist)
        {
            printf("The bookID has already existed! Unable to addBook()\n");
        }
        else
        {
            scanf("%c", &dummy);
            (list + counter)->bookID = target;

            printf("Enter book title:\n");
            fgets(title, 40, stdin);
            if (p = strchr(title, '\n'))
                *p = '\0';
            strcpy((list + counter)->title, title);

            printf("Enter author name:\n");
            fgets(author, 40, stdin);
            if (p = strchr(author, '\n'))
                *p = '\0';
            strcpy((list + counter)->author, author);

            printf("Enter price:\n");
            scanf("%lf", &price);
            (list + counter)->price = price;

            printf("Enter quantity:\n");
            scanf("%d", &quantity);
            (list + counter)->quantity = quantity;

            counter++;
            printf("The book has been added successfully\n");
        }
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