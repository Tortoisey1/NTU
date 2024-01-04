#include <stdio.h>

int digitValue1(int num, int k);
void digitValue2(int num, int k, int *result);

int main()
{
    int num, digit, result = -1;

    printf("Enter the number: \n");
    scanf("%d", &num);
    printf("Enter k position: \n");
    scanf("%d", &digit);
    printf("digitValue1(): %d\n", digitValue1(num, digit));
    digitValue2(num, digit, &result);
    printf("digitValue2(): %d\n", result);
    return 0;
}

int digitValue1(int num, int k)
{
    int result = 0, temp = num, tempresult = 0;

    for (int i = 0; i < k; i++)
    {
        tempresult = temp % 10;
        temp /= 10;
        if (temp == 0)
        {
            return result = 0;
        }
    }
    return tempresult;
}

void digitValue2(int num, int k, int *result)
{
    int temp = num;

    for (int i = 0; i < k; i++)
    {
        *result = temp % 10;
        temp /= 10;
        if (temp == 0)
        {
            *result = 0;
        }
    }
}