#include <stdio.h>
#include <string.h>

int main()
{
    char *p;

    strcpy(p, "zero");
    p += 1;
    printf("%s", p);

    return 0;
}