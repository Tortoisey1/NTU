#include <stdio.h>

void sortCharStr(char *str);

int main()
{
    char str[80];

    printf("Enter a string: \n");
    scanf("%s", str);
    sortCharStr(str);
    printf("sortCharStr(): %s\n", str);
    return 0;
}

void sortCharStr(char *str)
{
    char temp;
    int lenstr = strlen(str);

    for (int i = 0; i < lenstr; i++)
    {
        for (int j = 0; j < lenstr - 1; j++)
        {
            if (*(str + j) > *(str + j + 1))
            {
                temp = *(str + j);
                *(str + j) = *(str + j + 1);
                *(str + j + 1) = temp;
            }
        }
    }
}