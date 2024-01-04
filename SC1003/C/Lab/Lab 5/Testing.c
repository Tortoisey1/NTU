#include <stdio.h>

void main(void)
{
    int first = 5, second = 2;
    second = first + second;
    first = second - first;
    second = second - first;
    printf("Second is %d\n", second);
    printf("First is %d",first);
}