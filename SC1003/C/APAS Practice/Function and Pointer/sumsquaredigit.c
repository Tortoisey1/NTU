#include <stdio.h>

int sumSqDigits1(int num);
void sumSqDigits2(int num, int *result);

int main()
{
    int num, result;
    printf("Enter a number: \n");
    scanf("%d", &num);
    printf("sumSqDigits1(): %d\n", sumSqDigits1(num));
    sumSqDigits2(num, &result);
    printf("sumSqDigits2(): %d\n", result);
    return 0;
}

int sumSqDigits1(int num)
{
    int result = 0, temp;

    do
    {
        temp = num % 10;
        result = result + temp * temp;

        num /= 10;
    } while (num != 0);

    return result;
}

void sumSqDigits2(int num, int *result)
{
    int  temp;
    *result =0;

    do
    {
        temp = num % 10;
        *result == *result + temp * temp;

        num /= 10;
    } while (num != 0);
}