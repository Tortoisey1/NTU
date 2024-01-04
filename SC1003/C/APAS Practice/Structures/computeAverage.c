#include <stdio.h>
#include <string.h>

struct student
{
    char name[20];    /* student name */
    double testScore; /* test score */
    double examScore; /* exam score */
    double total;     /* total = (testScore+examScore)/2 */
};

double average();

int main()
{
    printf("average(): %.2f\n", average());
    return 0;
}

double average()
{
    char dummy, *p, name[20];
    double result, classtotal = 0, indivtotal;
    struct student class[50];
    int counter = 0;

    printf("Enter student name:\n");
    fgets(name, 20, stdin);
    if (p = strchr(name, '\n'))
    {
        *p = '\0';
    }

    while (strcmp(name, "END") != 0)
    {
        strcpy((class + counter)->name, name);

        printf("Enter test score:\n");
        scanf("%lf", &(class + counter)->testScore);

        printf("Enter exam score:\n");
        scanf("%lf", &(class + counter)->examScore);

        indivtotal = ((class + counter)->testScore + (class + counter)->examScore) / 2;
        (class + counter)->total = indivtotal;

        classtotal += indivtotal;

        printf("Student %s total = %.2lf\n", (class + counter)->name, indivtotal);

        counter++;

        scanf("%c", &dummy);
        printf("Enter student name:\n");
        fgets(name, 20, stdin);
        if (p = strchr(name, '\n'))
        {
            *p = '\0';
        }
    }
    if (counter != 0)
    {
        result = classtotal / counter;
    }

    return result;
}