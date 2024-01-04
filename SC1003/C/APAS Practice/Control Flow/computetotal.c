#include <stdio.h>
int main()
{
    int lines = 0, total = 0, num = 0, temp = 0;
    printf("Enter number of lines:\n");
    scanf("%d", &lines);
    for (int i = 1; i <= lines; i++)
    {
        printf("Enter line %d:\n", i);
        scanf("%d", &num);
        for (int j = 0; j < num; j++)
        {
            scanf("%d", &temp);
            total += temp;
        }
        printf("Total: %d\n", total);
        total = 0;
    }
    return 0;
}