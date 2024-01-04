#include <stdio.h>
#include <string.h>
int locateFirstChar(char *str, char ch);
int main()
{
    char str[40], ch, *p;

    printf("Enter a string: \n");
    fgets(str, 40, stdin);
    if (p = strchr(str, '\n'))
        *p = '\0';
    printf("Enter the target character: \n");
    scanf("%c", &ch);
    printf("locateFirstChar(): %d\n", locateFirstChar(str, ch));
    return 0;
}
int locateFirstChar(char *str, char ch)
{
    int counter = 0;
    while (str[counter] != '\0')
    {
        if (str[counter] == ch)
        {
            return counter;
        }

        counter++;
    }

    return -1;
}