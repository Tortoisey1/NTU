#include <stdio.h>

void swapMinMax1D(int ar[], int size);

int main()
{
    int ar[50], i, size;

    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i = 0; i < size; i++)
        scanf("%d", ar + i);
    swapMinMax1D(ar, size);
    printf("swapMinMax1D(): ");
    for (i = 0; i < size; i++)
        printf("%d ", *(ar + i));
    return 0;
}

void swapMinMax1D(int ar[], int size)
{
    int small = size - 1, large = size - 1, temp;

    for (int i = size - 1; i >= 0; i--)
    {
        if (ar[small] > ar[i])
        {
            small = i;
        }
        if (ar[large] < ar[i])
        {
            large = i;
        }
    }
    temp = ar[large];
    ar[large] = ar[small];
    ar[small] = temp;
}