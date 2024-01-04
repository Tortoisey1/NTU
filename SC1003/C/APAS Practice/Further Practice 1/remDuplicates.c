#include <stdio.h>

#define N 20

int remDuplicates(int a[], int size);

int main()
{
    int a[N], i, size;

    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data:\n", size);
    for (i = 0; i < size; i++)
        scanf("%d", &a[i]);
    size = remDuplicates(a, size);
    printf("remDuplicates(): \n");
    for (i = 0; i < size; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}

int remDuplicates(int a[], int size)
{
    int newsize = 1, temp = a[0];

    for (int i = 1; i < size; i++)
    {
        if (a[i] != temp)
        {
            a[newsize] = a[i];
            temp = a[i];
            newsize++;
        }
    }

    return newsize;
}