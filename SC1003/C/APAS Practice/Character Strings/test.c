#include <stdio.h>
#include <string.h>
#include <ctype.h>
void cipher(char *s);
int main()
{
    char str[80], dummychar, *p;
    int choice;

    printf("Select one of the following options: \n");
    printf("1: cipher() \n");
    printf("2: decipher() \n");
    printf("3: exit() \n");
    do
    {
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            scanf("%c", &dummychar);
            printf("Enter the string: \n");
            fgets(str, 80, stdin);
            if (p = strchr(str, '\n'))
                *p = '\0';
            printf("To cipher: %s -> ", str);
            cipher(str);
            printf("%s\n", str);
            break;

        default:
            break;
        }
    } while (choice < 3);
    return 0;
}
void cipher(char *s)
{
    int counter = 0;

    do
    {
        if (isalpha(*(s + counter)))
        {
            if (*(s + counter) == 'z')
            {
                *(s + counter) = 'a';
            }
            else if (*(s + counter) == 'Z')
            {
                *(s + counter) = 'A';
            }
            else
            {
                *(s + counter) = (char)((int)*(s + counter) + 1);
            }
        }

        counter++;
    } while (*(s + counter) != '\0');
}
