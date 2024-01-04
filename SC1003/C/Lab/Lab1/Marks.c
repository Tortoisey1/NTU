#include <stdio.h>
int main()
{
    int studentNumber = 0, mark;

    printf("Enter Student ID:\n");
    scanf("%d", &studentNumber);
    while(studentNumber != -1)
    {
        printf("Enter Mark: \n");
        scanf("%d", &mark);
        switch (mark/5)
        {
            case 20:
            case 19:
            case 18:
            case 17:
            case 16:
            case 15:
                printf("Grade = A\n");
                break;
            case 14:
            case 13:
                printf("Grade = B\n");
                break;
            case 12:
            case 11:
                printf("Grade = C\n");
                break;
            case 10:
            case 9:
                printf("Grade = D\n");
                break;
            default:
                printf("Grade = F\n");
                break;
        }
        printf("Enter Student ID: \n");
        scanf("%d", &studentNumber);
    }


    return 0;
}