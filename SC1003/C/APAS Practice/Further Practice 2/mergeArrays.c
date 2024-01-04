#include <stdio.h>

#define M 80

int mergeArrays(int a[M], int b[M], int c[M], int n1, int n2);

int main()
{
    int a[M], b[M], c[M], i, k = 0, n1, n2;
    printf("Enter the size of array a: \n");
    scanf("%d", &n1);
    printf("Enter the size of array b: \n");
    scanf("%d", &n2);
    printf("Enter array a[%d]: \n", n1);
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    printf("Enter array b[%d]: \n", n2);
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);
    k = mergeArrays(a, b, c, n1, n2);
    printf("mergeArrays(): \n");
    for (i = 0; i < k; i++)
        printf("%d ", c[i]);
    return 0;
}

int mergeArrays(int a[M], int b[M], int c[M], int n1, int n2)
{
    int counta = 0, countb = 0;
    for (int i = 0; i < (n1 + n2); i++)
    {
        if (counta != n1 && countb != n2)
        {
            if (a[counta] <= b[countb])
            {
                c[i] = a[counta];
                counta++;
            }
            else
            {
                c[i] = b[countb];
                countb++;
            }
        }
        else if (counta == n1)
        {
            c[i] = b[countb];
            countb++;
        }
        else if (countb == n2)
        {
            c[i] = a[counta];
            counta++;
        }
    }

    return (n1 + n2);
}