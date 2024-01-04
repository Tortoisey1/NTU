#include <stdio.h>
int main()
{
    int height, counter = 0, condition = 0;

    printf("Enter the height:\n");
    scanf("%d", &height);

    printf("The pattern is:\n");

    for (int i = 1; i <= height; i++)
    {
        if (i % 2 == 0)
        {
            condition = 1;
        }
        else
        {
            condition = 0;
        }
        for (int j = 0; j < i; j++)
        {
            if (!condition)
            {
                printf("A");
                condition = 1;
            }
            else
            {
                printf("B");
                condition = 0;
            }
        }
        printf("\n");
    }

    return 0;
}