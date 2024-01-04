#include <stdio.h>
#include <math.h>

int main()
{
    int result = 0, binary, counter = 0, digit = 1, remainder, numerator, deci = 0;

    printf("Enter a binary number:\n");
    scanf("%d", &binary);

    numerator = binary;
    do
    {
        remainder = numerator % 10;
        for (int i = 0; i < counter; i++)
        {
            digit *= 2;
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
        remainder = numerator % 8;
        for (int i = 0; i < counter; i++)
        {
            digit *= 10;
        }

        result += digit * remainder;

        counter++;
        digit = 1;
        numerator /= 8;
    } while (numerator != 0);

    printf("The equivalent octal number: %d", result);
    return 0;
}