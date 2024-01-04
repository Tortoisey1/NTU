#include <stdio.h>

#define SIZE 5

void findMinMax2D(int ar[SIZE][SIZE], int *min, int *max);

int main()
{
    int A[5][5];
    int i, j, min, max;

    printf("Enter the matrix data (%dx%d): \n", SIZE, SIZE);
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            scanf("%d", &A[i][j]);
    findMinMax2D(A, &min, &max);
    printf("min = %d\nmax = %d", min, max);
    return 0;
}

void findMinMax2D(int ar[SIZE][SIZE], int *min, int *max)
{
    *max = ar[0][0];
    *min = *max;
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
        {
            if (ar[i][j] < *min)
            {
                *min = ar[i][j];
            }
            else if (ar[i][j] > *max)
            {
                *max = ar[i][j];
            }
        }
}