#include <stdio.h>
#include <string.h>

void compareChar(char *str1, char *str2, char *str3);

int main()
{
    char str1[80], str2[80], str3[80];

    printf("Enter the first string: \n");
    scanf("%s", str1);
    printf("Enter the second string: \n");
    scanf("%s", str2);
    compareChar(str1, str2, str3);
    printf("compareChar(): %s\n", str3);
    return 0;
}

void compareChar(char *str1, char *str2, char *str3)
{

    int counter = 0, len1 = strlen(str1), len2 = strlen(str2);

    if (len1 > len2)
    {
        for (int i = 0; i < len1; i++)
        {
            if (*(str1 + i) > *(str2 + i))
            {
                *(str3 + i) = *(str1 + i);
            }
            else
            {
                *(str3 + i) = *(str2 + i);
            }
        }
        *(str3 + len1) = '\0';
    }
    else
    {
        for (int i = 0; i < len2; i++)
        {
            if (*(str1 + i) > *(str2 + i))
            {
                *(str3 + i) = *(str1 + i);
            }
            else
            {
                *(str3 + i) = *(str2 + i);
            }
        }
        *(str3 + len2) = '\0';
    }
}