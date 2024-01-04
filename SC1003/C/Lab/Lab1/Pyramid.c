#include <stdio.h>

int main()
{
    int x,i,height,length,count=1;

    printf("Enter the height:\n");
    scanf("%d",&height);
    printf("Pattern:\n");


    for(i=1;i <= height;i++)

    {
        for(x=1;x <= i;x++)
        {
           printf("%d",count);
        }

        printf("\n");

    count++;

    if (count==4)
    {
        count=1;
    }


    }
    return 0;
}