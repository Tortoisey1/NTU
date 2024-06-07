#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// global matrix to store the max values
int **m;

int max(int first, int second)
{
    if (first >= second)
    {
        return first;
    }
    else
    {
        return second;
    }
}

int bottom_up_dp(int n, int *s, int *v, int C)
{
    // first row
    for (int i = 1; i <= C; i++)
    {
        if (s[1] <= i)
        {
            m[1][i] = v[1];
        }
    }

    // run the for loop from the bottom
    for (int j = 2; j <= n; j++)
    {
        for (int k = 1; k <= C; k++)
        {
            // M(i,j) = max {M(i-1,j), M(i-1, j-si) + vi}
            // if got space to put this item
            if (k >= s[j])
            {
                // first one is dont add
                // second one is add
                m[j][k] = max((m[j - 1][k]), (m[j - 1][k - s[j]] + v[j]));
            }
            //no space put the item
            else
            {
                m[j][k] = m[j - 1][k];
            }
        }
    }

    return m[n][C];
}

int main()
{
    int n, C;
    int function;
    int *s;
    int *v;
    int i, j;
    printf("Enter the number of items n:\n");
    scanf("%d", &n);
    printf("Enter the capacity C:\n");
    scanf("%d", &C);
    s = (int *)malloc(sizeof(int) * (n + 1));
    v = (int *)malloc(sizeof(int) * (n + 1));

    printf("Enter the sizes of items (as a list, separate by spacing:\n");
    for (i = 1; i <= n; i++)
        scanf("%d", &s[i]);

    printf("Enter the values of items (as a list, separate by spacing:\n");
    for (i = 1; i <= n; i++)
        scanf("%d", &v[i]);

    /// Dynamically allocate memory for the 2D array
    m = (int **)malloc((n + 1) * sizeof(int *));
    for (int i = 0; i <= n; i++)
    {
        m[i] = (int *)malloc((C + 1) * sizeof(int));
    }

    // set the global matrix values
    for (int j = 0; j <= n; j++)
    {
        for (int k = 0; k <= C; k++)
        {
            m[j][k] = 0;
        }
    }

    printf("The maximum value is: %d \n", bottom_up_dp(n, s, v, C));
}