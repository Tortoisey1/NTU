#include <stdio.h>
#include <string.h>
#include <ctype.h>

void processString(char *str, int *totVowels, int *totDigits);

int main()
{
    char str[50], *p;
    int totVowels, totDigits;
    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p = strchr(str, '\n'))
        *p = '\0';
    processString(str, &totVowels, &totDigits);
    printf("Total vowels = %d\n", totVowels);
    printf("Total digits = %d\n", totDigits);
    return 0;
}

void processString(char *str, int *totVowels, int *totDigits)
{
    *totVowels = 0;
    *totDigits = 0;
    while (*str != '\0')
    {
        char result;
        result = tolower(*str);

        if (isdigit(result))
        {
            *totDigits += 1;
        }
        else if (result == 'a' || result == 'e' || result == 'i' || result == 'o' || result == 'u')
        {
            *totVowels += 1;
        }

        str++;
    }
}