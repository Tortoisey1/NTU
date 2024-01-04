#include <stdio.h>

int main()
{
    int height;
    printf("Enter the height:\n");
    scanf("%d", &height);

    printf("The pattern is:\n");

    for (int i = 1; i <= height; i++)
    {
        for (int j = 0; j < height - i; j++)
        {
            printf(" ");
        }

        for (int k = 0; k < 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}