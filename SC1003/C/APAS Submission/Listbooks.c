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

int main(void)
{
    Book shop[MAX];
    Book *shoppointer = shop;
    int choice;


    printf("NTU BOOKSHOP MANAGEMENT PROGRAM:\n");
    printf("1: listBooks () :\n");
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
            printf("Book pricce: %.2lf\n", (list + i)->price);
            printf("Quantity: %d\n", (list + i)->quantity);
        }
}