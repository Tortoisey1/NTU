#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// global array to store values
int *arr;

int top_down_dp(int n)
{
    // base cases
    if (n == 0 || n == 1 || n == 2)
    {
        arr[n] = n;
        return n;
    }

    if (arr[n - 1] == -1)
    {
        arr[n - 1] = top_down_dp(n - 1);
    }

    if (arr[n - 2] == -1)
    {
        arr[n - 2] = top_down_dp(n - 2);
    }

    if (arr[n - 3] == -1)
    {
        arr[n - 3] = top_down_dp(n - 3);
    }
    // F(n-1) + 2*F(n-2) - 3F(n-3)
    arr[n] = arr[n - 1] + 2 * arr[n - 2] - 3 * arr[n - 3];
    return arr[n];
}

int main()
{
    int n;
    int function;
    int i;
    printf("Enter the value of n:\n");
    scanf("%d", &n);

    arr = (int *)malloc((n + 1) * sizeof(int));
    for (int j = 0; j <= n; j++)
    {
        arr[j] = -1;
    }

    top_down_dp(n);

    printf("The value of F(%d) is: %d \n", n, top_down_dp(n));
}