#include <stdio.h>
#include <string.h>

int countWords(char *s);

int main()
{
    char str[80], *p;
    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p = strchr(str, '\n'))
        *p = '\0';
    printf("countWords(): %d", countWords(str));
    return 0;
}

int countWords(char *s)
{
    int count = 1;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == ' ')
        {
            count++;
        }
    }

    return count;
}