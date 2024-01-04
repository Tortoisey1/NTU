#include <stdio.h>
#include <string.h>
char *sweepSpace1(char *str);
char *sweepSpace2(char *str);


int main()
{
    char str[80], str2[80], *p;
    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p = strchr(str, '\n'))
        *p = '\0';
    strcpy(str2, str);
    printf("sweepSpace1(): %s\n", sweepSpace1(str));
    printf("sweepSpace2(): %s\n", sweepSpace2(str2));
    return 0;
}


char *sweepSpace1(char *str)
{
    char new[80];
    int counter = 0;
    for (int i = 0; i < 80; i++)
    {
        if (str[i] == ' ')
            continue;
        else
        {
            new[counter] = str[i];
            counter ++;
            if (str[i] == '\0')
                break;
        }
    }
    strcpy(str, new);
    return str;
}


char *sweepSpace2(char *str)
{
    char new[80];
    char *pointer = new;
    char *old = str;
    for (int i = 0; i < 80; i++)
    {
        if (*(old) == ' ')
            old++;
        else
        {
            *(pointer) = *(old);
            old++;
            pointer++;
            if (str[i] == '\0')
                break;
        }
    }
    strcpy(str, new);
    return str;
}