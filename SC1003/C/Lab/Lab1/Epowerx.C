#include <stdio.h>
float formula(float num);
float factorial(int nums);
float power(float n, int i);

int main()
{
    float x, result;
    printf("Enter x: ");
    scanf("%f", &x);
    result = formula(x);
    printf("Result = %.2f", result);

    return 0;
}

float formula(float n)
{
    float result;
    for ( int i = 0; i < 11; i ++)
        {
            result += (power(n,i))/(factorial(i));
        }
    return result;
}

float factorial(int nums)
{
    int sum;
    if (nums == 0 || nums == 1)
        return 1;
    else
        return nums * factorial (nums - 1);
}

float power (float n, int numberoftime)
{
    float powern;
    if (numberoftime == 0)
        return 1;
    else 
        return n * power(n,numberoftime - 1);
}