#include <stdio.h>

int platform1D(int ar[], int size);

int main()
{
    int i, b[50], size;
    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i = 0; i < size; i++)
        scanf("%d", &b[i]);
    printf("platform1D(): %d\n", platform1D(b, size));
    return 0;
}

int platform1D(int ar[], int size)
{
    int sum = 1, target = ar[0], newtarget, count = 0;

    for (int i = 1; i < size; i++)
    {
        if (ar[i] == target)
        {
            if (count > sum)
            {
                sum = count;
            }
            count++;
        }
        else
        {
            target = ar[i];
            count = 1;
            count++;
        }
    }

    return sum;
}