#include <stdio.h>
#include <math.h>

float power1(float num, int p);
void power2(float num, int p, float *result);
int main()

{
    int power;
    float number, result = -1;

    printf("Enter the number and power: \n");
    scanf("%f %d", &number, &power);
    printf("power1(): %.2f\n", power1(number, power));
    power2(number, power, &result);
    printf("power2(): %.2f\n", result);
    return 0;
}

float power1(float num, int p)
{
    float result;

    if (p == 0)
    {
        return result = 1.00;
    }
    else if (p < 0)
    {
        return result = (1 / num) * power1(num, p + 1);
    }
    else
    {
        return result = num * power1(num, p - 1);
    }
}
void power2(float num, int p, float *result)
{
    if (*result<0.0)
    {
        *result *=(-1);
        printf("%f",*result);
    }


    if (p == 0)
    {
        *result *= 1.00;
    }
    else if (p < 0)
    {
        *result = (1 / num) * (*result);
        power2(num, p + 1, result);
    }
    else
    {
        *result = num * (*result);
        power2(num, p - 1, result);
    }
}