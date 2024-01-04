#include <stdio.h>

int main()
{
    int num, count = 1;

    printf("Enter a number (between 1 and 9):\n");
    scanf("%d", &num);

    printf("Multiplication Table:\n");
    printf("  ");
    for (int j = 1; j <= num; j++)
    {
        printf(" %d", j);
    }
    printf("\n");
    for (int i = 1; i <= num; i++)
    {
        printf("%d %d", i, i * count);
        while (count != i)
        {
            count++;
            printf(" %d", i * count);
        }
        printf("\n");
        count = 1;
    }
    /* Write your code here */
    return 0;
}