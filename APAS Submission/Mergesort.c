#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

const int MAX = 5;
int counter = 2;

typedef struct
{
    int bookID; // Unique
    char title[40];
    char author[40];
    double price;
    int quantity;
} Book;

void listBooks(Book *list);
void merge(Book *list, int left, int middle, int right);
void mergesort(Book *list, int left, int right);
void copy(Book *source, Book *target, int i, int j);

int main(void)
{
    Book shop[MAX];
    Book *shoppointer = shop;
    int choice;

    (shoppointer + 0)->bookID = 1;
    strcpy((shoppointer + 0)->title, "C Programming");
    strcpy((shoppointer + 0)->author, "PC Leong");
    (shoppointer + 0)->price = 20.20;
    (shoppointer + 0)->quantity = 12;

    (shoppointer + 1)->bookID = 7;
    strcpy((shoppointer + 1)->title, "Java Programming");
    strcpy((shoppointer + 1)->author, "Ruby");
    (shoppointer + 1)->price = 30.50;
    (shoppointer + 1)->quantity = 50;


    printf("aftersort\n");
    mergesort(shoppointer, 0, counter);
    listBooks(shoppointer);

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

void merge(Book *list, int left, int middle, int right)
{
    int k, i, j;
    int n1 = middle - left + 1;
    int n2 = right - middle;

    Book leftarray[n1], rightarray[n2];
    Book *leftpointer = leftarray;
    Book *rightpointer = rightarray;

    for (i = 0; i < n1; i++)
    {
        printf("left\n");
        copy(list, leftpointer, left + i, i);
        listBooks(leftpointer);
    }
    for (j = 0; j < n2; j++)
    {
        printf("right\n");
        copy(list, rightpointer, middle + 1 + j, j);
        listBooks(rightpointer);
    }

    i = 0;
    j = 0;
    k = left;

    while (i < n1 && j < n2)
    {
        if ((leftpointer + i)->bookID <= (rightpointer + j)->bookID)
        {
            copy(leftpointer, list, i, k);
            i++;
        }
        else
        {
            copy(rightpointer, list, j, k);
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        copy(leftpointer, list, i, k);
        i++;
        k++;
    }

    while (j < n2)
    {
        copy(rightpointer, list, j, k);
        j++;
        k++;
    }
}

void mergesort(Book *list, int left, int right)
{
    if (left < right)
    {
        int middle = left + (right - left) / 2;

        //sort left
        mergesort(list, left, middle);

        //sort right    
        mergesort(list, middle + 1, right);

        //merge left and right
        merge(list, left, middle, right);
    }
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