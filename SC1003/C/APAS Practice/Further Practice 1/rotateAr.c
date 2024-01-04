#include <stdio.h>

#define N 20

int main()
{
    int a[N], i, j, k, m;
    int size;
    /* Write your code here – for additional local variables */
    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i = 0; i < size; i++)
        scanf("%d", &a[i]);
    printf("Result: \n");
    /* Write your code here */

    for (int i = 1; i <= size; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            printf("%d", a[size - j]);
        }

        for (int k = 0; k < size - i; k++)
        {
            printf("%d", a[k]);
        }
        printf("\n");
    }

    return 0;
}