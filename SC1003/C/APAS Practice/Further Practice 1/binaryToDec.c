#include <stdio.h>
#include <math.h>
int main()
{
    int binary, decimal = 0, counter = 0, remainder, power = 1;
    printf("Enter a binary number:\n");
    scanf("%d", &binary);

    do
    {
        remainder = binary % 10;

        for (int i = 0; i < counter; i++)
        {
            power *= 2;
        }
        decimal += power * remainder;

        power = 1;
        counter++;
        binary /= 10;
    } while (binary != 0);

    printf("The equivalent decimal number: %d", decimal);
    return decimal;
}