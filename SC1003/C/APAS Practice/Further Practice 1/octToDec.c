#include <stdio.h>
#include <math.h>
int main()
{
    int octal, decimal = 0, counter = 0, remainder, power = 1;
    printf("Enter an octal number:\n");
    scanf("%d", &octal);

    do
    {
        remainder = octal % 10;

        for (int i = 0; i < counter; i++)
        {
            power *= 8;
        }
        decimal += power * remainder;

        power = 1;
        counter++;
        octal /= 10;
    } while (octal != 0);

    printf("The equivalent decimal number: %d", decimal);
    return decimal;
}