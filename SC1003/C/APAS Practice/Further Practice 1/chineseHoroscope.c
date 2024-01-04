#include <stdio.h>

int main()
{
    int year, remainder;
    printf("Enter your birth year:\n");
    scanf("%d", &year);

    while (year != -1)
    {
        printf("chineseHoroscope: ");
        remainder = year % 12;
        switch (remainder)
        {
        case 0:
            printf("Monkey\n");
            break;
        case 1:
            printf("Rooster\n");
            break;
        case 2:
            printf("Dog\n");
            break;
        case 3:
            printf("Pig\n");
            break;
        case 4:
            printf("Rat\n");
            break;
        case 5:
            printf("Cow\n");
            break;
        case 6:
            printf("Tiger\n");
            break;
        case 7:
            printf("Rabbit\n");
            break;
        case 8:
            printf("Dragon\n");
            break;
        case 9:
            printf("Snake\n");
            break;
        case 10:
            printf("Horse\n");
            break;
        case 11:
            printf("Goat\n");
            break;
        }
        printf("Enter your birth year:\n");
        scanf("%d", &year);
    }

    return 0;
}