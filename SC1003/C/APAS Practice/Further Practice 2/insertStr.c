#include <stdio.h>
#include <string.h>

char *insertStr(char *a, char *s);

int main()
{
    char a[40], s[40];
    printf("Enter the string a: \n");
    scanf("%s", a);
    printf("Enter the string s: \n");
    scanf("%s", s);
    insertStr(a, s);
    printf("insertStr(): %s", a);
    return 0;
}

char *insertStr(char *a, char *s)
{
    int counter = 0, lens = strlen(s), counters = 0, lena = strlen(a), countera = 0;
    char temp[40], p, *temppointer, tempchar;

    // sort s

    temppointer = s;
    for (int i = 0; i < lens; i++)
    {
        for (int j = 0; j < lens - 1; j++)
        {
            if (*(temppointer + j) > *(temppointer + j + 1))
            {
                tempchar = *(temppointer + j);
                *(temppointer + j) = *(temppointer + j + 1);
                *(temppointer + j + 1) = tempchar;
            }
        }
    }


    // merge s and a
    while (counters != lens && countera != lena)
    {
        if (*(a + countera) <= *(s + counters))
        {
            temp[counter] = *(a + countera);
            countera++;
            counter++;
        }
        else
        {
            temp[counter] = *(s + counters);
            counters++;
            counter++;
        }
    }

    if (counters != lens)
    {
        for (int i = counters; i < lens; i++)
        {
            temp[counter] = *(s + i);
            counter++;
        }
    }
    else
    {
        for (int i = countera; i < lena; i++)
        {
            temp[counter] = *(a + i);
            counter++;
        }
    }
    temp[counter] = '\0';

    strcpy(a, temp);

    return a;
}