#include <stdio.h>
#include <stdlib.h>

int octStrTodec(char *str);

int main()
{
    char str[20], *sp;
    int num;

    printf("Enter an octal number: \n");
    scanf("%s", str);
    num = octStrTodec(str);
    printf("octStrTodec(): %d\n", num);
    return 0;
}

int octStrTodec(char *str)
{
    int remainder = 0, counter = 0, result = 0, oct, temp = 1;

    oct = atoi(str);

    do
    {
        remainder = oct % 10;

        for (int i = 0; i < counter; i++)
        {
            temp *= 8;
        }
        result += remainder * temp;

        oct /= 10;
        counter++;
        temp = 1;
    } while (oct != 0);

    return result;
}
