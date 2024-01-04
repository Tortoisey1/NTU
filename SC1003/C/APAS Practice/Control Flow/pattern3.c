#include <stdio.h>
int main()
{
    int height,count;
    printf("Enter the height:\n");
    scanf("%d",&height);

    printf("The pattern is:\n");
    for (int i =1;i<=height;i++)
    {
        count = i;
      for (int j=0; j<i;j++)
      {
        printf("%d",count);
        count ++;
        if ( count == 10)
        {
            count = 0;
        }
      }  
      printf("\n");
    }




   return 0;
}