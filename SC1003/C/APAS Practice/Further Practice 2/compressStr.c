#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void compressStr(char *str);

int main()
{
    char str[40];

    printf("Enter a sequence of characters: \n");
    scanf("%s", str);
    printf("compressStr(): ");
    compressStr(str);
    return 0;
}

void compressStr(char *str)
{
    char temp = str[0];
    int counter = 1;

    if (strlen(str) == 1)
    {
        printf("%s", str);
    }

    for (int i = 1; i < strlen(str); i++)
    {
        if (temp == str[i])
        {
            counter++;
        }
        else
        {
            if (counter > 1)
            {
                printf("[%d%c]", counter, temp);
            }
            else
            {
                printf("%c", temp);
            }
            counter = 1;
            temp = str[i];
        }
        if (i == strlen(str) - 1)
        {
            if (counter > 1)
            {
                printf("[%d%c]", counter, temp);
            }
            else
            {
                printf("%c", temp);
            }
        }
    }
}