#include <stdio.h>
#include <string.h>

void mergeStr(char *a, char *b, char *c);

int main()
{
    char a[80], b[80];
    char c[80];
    printf("Enter the first string a: \n");
    scanf("%s", a);
    printf("Enter the second string b: \n");
    scanf("%s", b);
    mergeStr(a, b, c);
    printf("mergeStr(): %s", c);
    return 0;
}

void mergeStr(char *a, char *b, char *c)
{
    int acount = 0, bcount = 0;
    for (int i = 0; i < strlen(a) + strlen(b); i++)
    {
        if (acount != strlen(a) && bcount != strlen(b))
        {
            if (a[acount] < b[bcount])
            {
                c[i] = a[acount];
                acount++;
            }
            else
            {
                c[i] = b[bcount];
                bcount++;
            }
        }
        else if (acount == strlen(a))
        {
            c[i] = b[bcount];
            bcount++;
        }
        else if (bcount == strlen(b))
        {
            c[i] = a[acount];
            acount++;
        }
    }
    c[strlen(a) + strlen(b)] = '\0';
}