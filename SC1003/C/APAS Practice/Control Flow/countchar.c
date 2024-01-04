#include <stdio.h>
int main()
{
    char target;
    int digits = 0, letters = 0;
    printf("Enter your characters (# to end):\n");
    scanf("%c", &target);
    while (target != '#')
    {
        if (isdigit(target))
            digits++;
        else if (isalpha(target))
            letters++;
        scanf("%c", &target);
    }
    printf("The number of digits: %d\n", digits);
    printf("The number of letters: %d\n", letters);
}