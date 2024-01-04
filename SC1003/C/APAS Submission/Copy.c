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

void listBooks(Book *list);
void copy(Book *source,Book *target, int i, int j);

int main(void)
{
    Book shop[MAX];
    Book *shoppointer = shop;
    int choice;
    Book newshop[MAX];
    Book *newshoppointer = newshop;


    shop[0].bookID = 1;
    strcpy(shop[0].title = "C Programming");
    strcpy(shop[0].author = "PC Leong");
    shop[0].price = 20.20;
    shop[0].quantity = 2;

    copy(newshoppointer,shoppointer, 0, 0);


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
        }
    } while (choice != 6);

    return 0;
}

void copy(Book *source,Book *target, int i, int j)
{
    // copy bookID
    (target + j)->bookID = (source + i)->bookID;

    // copy title
    strcpy((target + j)->title, (source + i)->title);

    // copy author
    strcpy((target + j)->author , (source + i)->author);

    // copy price
    (target + j)->price = (source + i)->price;

    // copy quantity
    (target + j)->quantity = (source + i)->quantity;
}
