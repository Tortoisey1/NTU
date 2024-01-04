#include <stdio.h>
int main()
{
    int hours, overtimehours = 0;
    float rate = 6.00, overtimerate = 1.5, grosspay = 0, tax = 0, netpay = 0;
    printf("Enter hours of work:\n");
    scanf("%d", &hours);

    if (hours > 40)
        overtimehours = hours - 40;

    grosspay = overtimehours * (1.5*6.00) + ((float)hours - overtimehours) * 6.00;

    if (grosspay > 1500)
    {
        tax = (3.0 / 10) * (grosspay - 1500) + (1.0 / 10) * (1000) + (1.0 / 5) * (500);
    }
    else if (grosspay > 1000)
    {
        tax = (1.0 / 10) * (1000) + (1.0 / 5) * (grosspay - 1000);
    }
    else
    {
        tax = (1.0 / 10) * (grosspay);
    }

    netpay = grosspay - tax;

    printf("Gross pay=%.2f\n", grosspay);
    printf("Tax=%.2f\n", tax);
    printf("Net pay=%.2f\n", netpay);

    return 0;
}