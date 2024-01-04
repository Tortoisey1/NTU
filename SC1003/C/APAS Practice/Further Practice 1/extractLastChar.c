#include <stdio.h>
#include <string.h>
void extractLastChar(char *str1, char *str2);
int main()
{
    char str1[80], str2[80], *p;

    printf("Enter a string: \n");
    fgets(str1, 80, stdin);
    if (p = strchr(str1, '\n'))
        *p = '\0';
    extractLastChar(str1, str2);
    printf("extractLastChar(): %s\n", str2);
    return 0;
}
void extractLastChar(char *str1, char *str2)
{
    int cond = 0, counter1 = 0, counter2 = 0;

    while (*(str1 + counter1) != '\0')
    {
        if (cond == 1)
        {
            *(str2 + counter2) = *(str1 + counter1 - 2);
            cond = 0;
            counter1++;
            counter2++;
        }
        else
        {
            if (*(str1 + counter1) == ' ')
            {
                cond = 1;
            }

            counter1++;
        }
    }
    *(str2 + counter2) = *(str1 + counter1 - 1);
    *(str2 + counter2 + 1) = '\0';
}