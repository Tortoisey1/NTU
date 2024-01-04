#include <stdio.h>
#include <string.h>

void insertChar(char *str1, char *str2, char ch);

int main()
{
    char a[80], b[80];
    char ch, *p;

    printf("Enter a string: \n");
    fgets(a, 80, stdin);
    if (p = strchr(a, '\n'))
        *p = '\0';
    printf("Enter a character to be inserted: \n");
    ch = getchar();
    insertChar(a, b, ch);
    printf("insertChar(): ");
    puts(b);
    return 0;
}

void insertChar(char *str1, char *str2, char ch)
{
    int counter = 0;

    do
    {
        *str2 = *str1;
        str1++;
        str2++;
        counter++;
        if (counter == 3)
        {
            *str2 = ch;
            str2++;
            counter = 0;
            if (*str1 == '\0')
            {
                *str2 = *str1;
            }
        }
        else if (*str1 == '\0')
        {
            *str2 = *str1;
        }

    } while (*str1 != '\0');
}