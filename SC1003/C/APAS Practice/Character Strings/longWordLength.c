#include <stdio.h>
#include <string.h>
int longWordLength(char *s);
int main()
{
    char str[80], *p;

    printf("Enter a string: \n");
    fgets(str, 80, stdin);
    if (p = strchr(str, '\n'))
        *p = '\0';
    printf("longWordLength(): %d\n", longWordLength(str));
    return 0;
}
int longWordLength(char *s)
{
    int count = 0, temp = 0;
    do
    {

        if (*s == ' ')
        {
            if (temp > count)
            {
                count = temp;
            }
            temp = 0;
        }
        else if (isalpha(*s))
        {
            temp++;
        }

        s++;
    } while (*s != '\0');
    if (temp > count)
    {
        count = temp;
    }
    return count;
}