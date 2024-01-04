#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int hexStrToDec(char *hex);

int main()
{
    int num;
    char hex[100];

    printf("Enter a hexadecimal number: \n");
    scanf("%s", &hex);
    num = hexStrToDec(hex);
    printf("hexStrToDec(): %d\n", num);
    return 0;
}

int hexStrToDec(char *hex)
{
    int sum = 0, temp, counter = 0;

    for (int i = strlen(hex) - 1; i >= 0; i--)
    {
        switch (hex[i])
        {
        case '0':
            temp = 0;
            break;
        case '1':
            temp = 1;
            break;
        case '2':
            temp = 2;
            break;
        case '3':
            temp = 3;
            break;
        case '4':
            temp = 4;
            break;
        case '5':
            temp = 5;
            break;
        case '6':
            temp = 6;
            break;
        case '7':
            temp = 7;
            break;
        case '8':
            temp = 8;
            break;
        case '9':
            temp = 9;
            break;
        case 'A':
            temp = 10;
            break;
        case 'B':
            temp = 11;
            break;
        case 'C':
            temp = 12;
            break;
        case 'D':
            temp = 13;
            break;
        case 'E':
            temp = 14;
            break;
        case 'F':
            temp = 15;
            break;
        }

        sum += temp * pow(16, counter);
        counter++;
    }

    return sum;
}