#include <stdio.h>

int main()
{
    int numberoflines, number, count = 0;
    float average, sum = 0.0;
    
    printf("Enter number of lines: \n");
    scanf("%d", &numberoflines);
    for (int i=1; i<=numberoflines; i++)
    {
        printf("Enter line %d (end with -1):\n" , i);
        scanf("%d",&number);
        while (number != -1)
        {
            count += 1;
            sum += number;
            scanf("%d",&number);
        }
        average = sum/count;
        printf("Average = %.2f \n", average);
        sum = 0;
        count = 0;
    }
    return 0;
}