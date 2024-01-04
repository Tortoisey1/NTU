#include <stdio.h>

#define M 10

void matShifting(int a[M][M], int b[M][M], int n);

int main()
{
    int a[M][M], b[M][M];
    int n, i, j;

    printf("Enter array (nxn) size (n<=10): \n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter row %d: \n", i);
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    matShifting(a, b, n);
    printf("Array b: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }
    return 0;
}

void matShifting(int a[M][M], int b[M][M], int n)
{
    int counter = 0;
    while (counter != n)
    {
        for (int i = 0; i < n; i++)
        {
            if (i == n-1)
            {
                b[counter][0] = a[counter][i];
            }
            else
            {
                b[counter][i+1] = a[counter][i];
            }
        }

        counter++;
    }
}