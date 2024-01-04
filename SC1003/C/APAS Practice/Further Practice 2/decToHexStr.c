#include <stdio.h>
#include <string.h>

void decTohexStr(char *str, int num);

int main()
{
    int num, i;
    char str[20];
    printf("Enter a decimal number: \n");
    scanf("%d", &num);
    decTohexStr(str, num);
    printf("decTohexStr(): %s\n", str);
    return 0;
}

void decTohexStr(char *str, int num)
{
    int remainder, quotient, counter = 0;
    char temp[20];

    do
    {
        remainder = num % 16;
        num /= 16;

        switch (remainder)
        {
        case 0:
            temp[counter] = '0';
            break;
        case 1:
            temp[counter] = '1';
            break;
        case 2:
            temp[counter] = '2';
            break;
        case 3:
            temp[counter] = '3';
            break;
        case 4:
            temp[counter] = '4';
            break;
        case 5:
            temp[counter] = '5';
            break;
        case 6:
            temp[counter] = '6';
            break;
        case 7:
            temp[counter] = '7';
            break;
        case 8:
            temp[counter] = '8';
            break;
        case 9:
            temp[counter] = '9';
            break;
        case 10:
            temp[counter] = 'A';
            break;
        case 11:
            temp[counter] = 'B';
            break;
        case 12:
            temp[counter] = 'C';
            break;
        case 13:
            temp[counter] = 'D';
            break;
        case 14:
            temp[counter] = 'E';
            break;
        case 15:
            temp[counter] = 'F';
            break;
        }

        counter++;
    } while (num != 0);

    // reverse the string
    for (int j = 0; j < counter; j++)
    {
        str[j] = temp[counter - 1 - j];
    }
    str[counter] = '\0';
}