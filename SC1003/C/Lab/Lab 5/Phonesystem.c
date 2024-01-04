#include <stdio.h>
#include <string.h>
#define MAX 100
typedef struct
{
    char name[20];
    int telno;
} PhoneBk;

int readin(PhoneBk *pb);
void printPB(PhoneBk *pb, int size);
void search(PhoneBk *pb, int size, char *target);

int main()
{
    PhoneBk s[MAX];
    char t[20], *p;
    int size = 0, choice;
    char dummychar;
    printf("Select one of the following options: \n");
    printf("1: readin()\n");
    printf("2: search()\n");
    printf("3: printPB()\n");
    printf("4: exit()\n");
    do
    {
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            scanf("%c", &dummychar);
            size = readin(s);
            break;
        case 2:
            scanf("%c", &dummychar);
            printf("Enter search name: \n");
            fgets(t, 20, stdin);
            if (p = strchr(t, '\n'))
                *p = '\0';
            search(s, size, t);
            break;
        case 3:
            printPB(s, size);
            break;
        }
    } while (choice < 4);
    return 0;
}

int readin(PhoneBk *pb)
{
    int count = 0, num;
    char name[20], *exit = "#", dummychar, *p;

    printf("Enter name:\n");
    fgets(name, 20, stdin);
    if (p=strchr(name,'\n'))
        *p='\0';
    while (strcmp(name, exit) != 0)
    {
        strcpy(pb[count].name, name);
        printf("Enter tel:\n");
        scanf("%d", &num);
        pb[count].telno = num;
        scanf("%c", &dummychar);
        printf("Enter name:\n");
        fgets(name, 20, stdin);
        if (p=strchr(name,'\n'))
            *p='\0';
        count++;
    }

    return count;
    /* Write your code here */
}

void printPB(PhoneBk *pb, int size)
{
    if (size == 0)
        printf("Empty phonebook\n");
    else
        printf("The phonebook list:\n");
        for (int i = 0; i < size; i++)
        {
            printf("Name: %s\nTelno: %d\n", pb[i].name, pb[i].telno);
        }
}

void search(PhoneBk *pb, int size, char *target)
{
    for (int i = 0; i < size; i ++)
    {
        if (strcmp(target,pb[i].name) == 0)
        {
            printf("Name = %s, Tel = %d\n",pb[i].name, pb[i].telno);
            break;
        }
        else if ((strcmp(target,pb[i].name) != 0) && (i == size - 1))
        {
            printf("Name not found!\n");
        }
    }
}