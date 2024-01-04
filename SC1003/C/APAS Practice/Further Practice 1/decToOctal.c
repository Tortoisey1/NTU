#include <stdio.h>
#include <math.h>

int main()
{
    int decimal, octal, remainder = 0,  counter = 0, result=0;

    printf("Enter a decimal number:\n");
    scanf("%d", &decimal);

    do
    {
        remainder = decimal % 8;
        decimal = (decimal - remainder)/8;
        for (int i = 0; i < counter; i++)
        {
            remainder *= 10;
        }
        result += remainder;
        counter++;
    } while (decimal != 0);

    printf("The equivalent octal number: %d", result);

    return 0;
}