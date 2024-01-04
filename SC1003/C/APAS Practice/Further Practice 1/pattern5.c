#include <stdio.h>

int main()
{
    int height, counter, cond = 0;
    printf("Enter the height:\n");
    scanf("%d", &height);

    printf("The pattern is:\n");

    for (int i = 1; i <= height; i++)
    {
        for (int j = 0; j < height - i; j++)
        {
            printf(" ");
        }

        counter = 2 * i - 1;

        for (int k = 0; k < counter; k++)
        {
            if (cond == 0)
            {
                printf("+");
                cond = 1;
            }
            else
            {
                printf("=");
                cond = 0;
            }
        }

        printf("\n");
    }

    return 0;
}