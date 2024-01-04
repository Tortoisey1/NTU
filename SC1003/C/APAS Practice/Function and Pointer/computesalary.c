#include <stdio.h>

void readInput(int *id, int *noOfHours, int *payRate);
double computeSalary1(int noOfHours, int payRate);
void computeSalary2(int noOfHours, int payRate, double *grossPay);

int main()
{
    int id = -1, noOfHours, payRate;
    double grossPay;

    readInput(&id, &noOfHours, &payRate);
    while (id != -1)
    {
        printf("computeSalary1(): ");
        grossPay = computeSalary1(noOfHours, payRate);
        printf("ID %d grossPay %.2f \n", id, grossPay);
        printf("computeSalary2(): ");
        computeSalary2(noOfHours, payRate, &grossPay);
        printf("ID %d grossPay %.2f \n", id, grossPay);
        readInput(&id, &noOfHours, &payRate);
    }
    return 0;
}

void readInput(int *id, int *noOfHours, int *payRate)
{
    printf("Enter ID (-1 to end):\n");
    scanf("%d", id);

    printf("Enter number of hours:\n");
    scanf("%d", noOfHours);

    printf("Enter hourly pay rate:\n");
    scanf("%d", payRate);
}

double computeSalary1(int noOfHours, int payRate)
{
    double pay;
    int extrahours = 0;

    if (noOfHours > 160)
    {
        extrahours = noOfHours - 160;
    }

    pay = (noOfHours - extrahours) * (double)(payRate) + (extrahours) * (1.5 * payRate);

    return pay;
}

void computeSalary2(int noOfHours, int payRate, double *grossPay)
{

    double pay;
    int extrahours = 0;

    if (noOfHours > 160)
    {
        extrahours = noOfHours - 160;
    }

    *grossPay = (noOfHours - extrahours) * (double)(payRate) + (extrahours) * (1.5 * payRate);
}