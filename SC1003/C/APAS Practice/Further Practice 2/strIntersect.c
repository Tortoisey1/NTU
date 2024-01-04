#include <stdio.h>
#include <string.h>

void strIntersect(char *str1, char *str2, char *str3);

int main()
{
    char str1[50], str2[50], str3[50];

    printf("Enter str1: \n");
    scanf("%s", str1);
    printf("Enter str2: \n");
    scanf("%s", str2);
    strIntersect(str1, str2, str3);
    if (*str3 == '\0')
        printf("strIntersect(): null string\n");
    else
        printf("strIntersect(): %s\n", str3);
    return 0;
}

void strIntersect(char *str1, char *str2, char *str3)
{
    int counter = 0, length1 = strlen(str1), length2 = strlen(str2);
    char target;

    if (length1 > length2)
    {
        for (int i = 0; i < length1; i++)
        {
            target = *(str1 + i);
            for (int j = 0; j < length2; j++)
            {
                if (target == *(str2 + j))
                {
                    *(str3 + counter) = target;
                    counter++;
                    break;
                }
            }
        }
    }
    else if(length1 < length2)
    {
        for (int i = 0; i < length2; i++)
        {
            target = *(str2 + i);
            for (int j = 0; j < length1; j++)
            {
                if (target = *(str1 + j))
                {
                    *(str3 + counter) = target;
                    counter++;
                    break;
                }
            }
        }
    }

    if (counter == 0)
    {
        *str3 ='\0';
    }
    
    *(str3 + counter) = '\0';
}