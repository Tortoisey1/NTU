#include <stdio.h>
#include <math.h>

#define INIT_VALUE 999

int extEvenDigits1(int num);
void extEvenDigits2(int num, int *result);

int main()
{
    int number, result = INIT_VALUE;

    printf("Enter a number: \n");
    scanf("%d", &number);
    printf("extEvenDigits1(): %d\n", extEvenDigits1(number));
    extEvenDigits2(number, &result);
    printf("extEvenDigits2(): %d\n", result);
    return 0;
}

int extEvenDigits1(int num)
{
    int result = 0, temp = 0, count = 1, first = 1;

    do
    {
        temp = num % 10;

        if (temp % 2 == 0)
        {
            if (first)
            {
                result = temp;
                first = 0;
            }
            else
            {

                result = result + temp * (pow(10, count));
                count++;
            }
        }

        num /= 10;
    } while (num != 0);

    if (result == 0)
    {
        return result = -1;
    }

    return result;
}

void extEvenDigits2(int num, int *result)
{
    int temp = 0, count = 1, first = 1;

    do
    {
        temp = num % 10;

        if (temp % 2 == 0)
        {
            if (first)
            {
                *result = temp;
                first = 0;
            }
            else
            {

                *result = *result + temp * (pow(10, count));
                count++;
            }
        }

        num /= 10;
    } while (num != 0);

    if (*result == INIT_VALUE)
    {
        *result = -1;
    }
}