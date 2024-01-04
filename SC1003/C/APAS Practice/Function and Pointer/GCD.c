#include <stdio.h>
int gcd1(int num1, int num2);
void gcd2(int num1, int num2, int *result);
int main()
{
    int x, y, result =-1;
    printf("Enter 2 numbers: \n");
    scanf("%d %d", &x, &y);
    printf("gcd1(): %d\n", gcd1(x, y));
    gcd2(x, y, &result);
    printf("gcd2(): %d\n", result);
    return 0;
}
int gcd1(int num1, int num2)
{
    int gcd = 1, max, min;
    if (num1 > num2)
    {
        max = num1;
        min = num2;
    }
    else
    {
        max = num2;
        min = num1;
    }
    for (int i = 1; i <= min; i++)
    {
        if (min % i == 0 && max % i == 0)
        {
            gcd = i;
        }
    }

    return gcd;
}
void gcd2(int num1, int num2, int *result)
{
    int gcd = 1, max, min;
    if (num1 > num2)
    {
        max = num1;
        min = num2;
    }
    else
    {
        max = num2;
        min = num1;
    }
    for (int i = 1; i <= min; i++)
    {
        if (min % i == 0 && max % i == 0)
        {
            gcd = i;
        }
    }
    *result = gcd;
}