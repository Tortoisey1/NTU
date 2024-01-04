#include <stdio.h>

void printChart(int x, int y, int z);

int main()
{
    int x, y, z;
    printf("Enter 3 inputs: \n");
    scanf("%d %d %d", &x, &y, &z);
    printf("The bar chart is: \n");
    printChart(x, y, z);
    return 0;
}

void printChart(int x, int y, int z)
{
    int counter;
    if (x > y && x > z)
    {
        counter = x;
    }
    else if (y > x && y > z)
    {
        counter = y;
    }
    else
    {
        counter = z;
    }

    for (int i = counter; i > 0; i--)
    {
        if (x >= i)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }

        if (y >= i)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }

        if (z >= i)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
        printf("\n");
    }
}