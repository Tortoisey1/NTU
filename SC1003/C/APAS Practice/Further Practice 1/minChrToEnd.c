#include <stdio.h>
#include <string.h>

void minCharToEnd(char *str);

int main()
{
    char str[80];

    printf("Enter a string: \n");
    scanf("%s", str);
    minCharToEnd(str);
    printf("minCharToEnd(): %s", str);
    return 0;
}

void minCharToEnd(char *str)
{
    int temp = 0;
    char p;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] < str[temp])
        {
            temp = i;
        }
    }
    p = str[temp];
    for (int j = temp; j < strlen(str); j++)
    {
        if (j == (strlen(str) - 1))
        {
            str[j] = p;
        }
        else
        {
            str[j] = str[j + 1];
        }
    }
}