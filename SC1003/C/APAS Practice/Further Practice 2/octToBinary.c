#include <stdio.h>
#include <math.h>

int main()
{
    int result = 0, octal, counter = 0, digit = 1, remainder, numerator, deci = 0;

    printf("Enter an octal number:\n");
    scanf("%d", &octal);

    numerator = octal;
    do
    {
        remainder = numerator % 10;
        for (int i = 0; i < counter; i++)
        {
            digit *= 8;
        }

        deci += digit * remainder;

        counter++;
        digit = 1;
        numerator /= 10;
    } while (numerator != 0);

    digit = 1;
    counter = 0;
    numerator = deci;
    do
    {
        remainder = numerator % 2;
        for (int i = 0; i < counter; i++)
        {
            digit *= 10;
        }

        result += digit * remainder;

        counter++;
        digit = 1;
        numerator /= 2;
    } while (numerator != 0);

    printf("The equivalent binary number: %d", result);
    return 0;
}