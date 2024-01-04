#include <stdio.h>
int main()
{
    int COE, cat, initial;
    float discounted, total, tax;

    printf("Please enter the list price:\n");
    scanf("%d", &initial);

    discounted = initial * 0.9;
    if (discounted > 100000)
    {
        tax = discounted * 0.13;
    }
    else
    {
        tax = discounted * 0.03;
    }

    printf("Please enter the category:\n");
    scanf("%d", &cat);
    switch (cat)
    {
    case 1:
        COE = 70000;
        break;
    case 2:
        COE = 80000;
        break;
    case 3:
        COE = 23000;
        break;
    default:
        COE = 600;
        break;
    }

    total = COE + tax + discounted;
    printf("Total price is $%.2f", total);

    return 0;
}