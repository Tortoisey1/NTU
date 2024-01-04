#include <stdio.h>

int main()
{
    int height, temp, cond = 1, counter = 0;
    printf("Enter the height:\n");
    scanf("%d", &height);
    printf("The pattern is:\n");
    for (int i = 1; i <= height; i++)
    {
        for (int j = 0; j < height - i; j++)
        {
            printf(" ");
        }

        temp = i;
        for (int k = 0; k < 2 * i - 1; k++)
        {
            printf("%d", temp);
            counter++;
            if (counter < i)
            {
                temp++;
            }
            else
            {
                if (temp == 0)
                {
                    temp = 10;
                }
                temp--;
            }
            if (temp == 10)
            {
                temp = 0;
            }
        }

        cond = 1;
        counter = 0;
        printf("\n");
    }
}