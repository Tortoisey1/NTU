#include <stdio.h>

int main(void)
{
    int tempferen;
    double tempC;
    printf("Enter the temperature in degree F:\n");
    scanf("%d", &tempferen);
    while (tempferen != -1)
    {
        tempC = (5.0 / 9) * (double)(tempferen - 32);
        printf("Converted degree in C: %.2lf\n", tempC);

        printf("Enter the temperature in degree F:\n");
        scanf("%d", &tempferen);
    }

    return 0;
}
