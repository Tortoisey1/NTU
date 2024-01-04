#include <stdio.h>
#include <string.h>

char *insertStr(char *a, char *s);

int main()
{
    char a[]="fbla", temp, *p;
    p = a;
    int lena = strlen(a);

    for (int i = 0; i < lena; i++)
    {
        for (int j = 0; j < lena - 1; j++)
        {
            if (*(p + j) > *(p + j + 1))
            {
                temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }
    printf("%s", a);

    return 0;
}
