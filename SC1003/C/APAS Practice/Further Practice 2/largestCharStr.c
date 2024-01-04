#include <stdio.h>
#include <string.h>

#define N 20

void largeCharStr(char str[N][20], char a[N], int size);

int main()
{
    char str[N][20], dummy;
    char a[N], i, j, size;

    printf("Enter number of strings: \n");
    scanf("%d", &size);
    scanf("%c", &dummy);
    for (i = 0; i < size; i++)
    {
        printf("Enter string %d: \n", i + 1);
        scanf("%s", str[i]);
    }
    largeCharStr(str, a, size);
    printf("largeCharStr(): \n");
    for (i = 0; i < size; i++)
    {
        printf("String %d: ", i + 1);
        printf("%c\n", a[i]);
    }
    return 0;
}

void largeCharStr(char str[N][20], char a[N], int size)
{
    char temp;
    for (int i = 0; i < size; i++)
    {
        temp = str[i][0];
        for (int j = 1; j < strlen(str[i]); j++)
        {
            if (temp < str[i][j])
            {
                temp = str[i][j];
            }
        }
        a[i] = temp;
    }
}