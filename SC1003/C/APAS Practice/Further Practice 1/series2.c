#include <stdio.h>
int main()
{
    double num, temptop = 1, tempbot = 1, ans = 1;
    printf("Enter a number:\n");
    scanf("%lf", &num);

    for (int i = 1; i <= 20; i++)
    {

        temptop *= num;
        tempbot *= i;

        temptop *= -1;

        ans = ans + (temptop / tempbot);
    }

    printf("Result = %.2lf\n", ans);
}
