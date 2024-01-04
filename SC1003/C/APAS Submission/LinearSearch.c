#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

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

int linearsearch(Book *list, char targettitle[40], char targetauthor[40]);
void toLower(char *list);

int main(void)
{
    Book shop[MAX];
    Book *shoppointer = shop;
    char *p;
    char targettitle[40], targetauthor[40];
    int choice, targetID;

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

    printf("Enter the target book title:\n");
    fgets(targettitle, 40, stdin);
    if (p = strchr(targettitle, '\n'))
        *p = '\0';

    printf("Enter the target author name:\n");
    fgets(targetauthor, 40, stdin);
    if (p = strchr(targetauthor, '\n'))
        *p = '\0';

    targetID = linearsearch(shop, targettitle, targetauthor);

    printf("%d", targetID);
    return 0;
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