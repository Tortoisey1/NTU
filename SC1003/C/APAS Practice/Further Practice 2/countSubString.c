#include <stdio.h>
#include <string.h>

int countSubstring(char str[], char substr[]);

int main()
{
    char str[80], substr[80];
    int result;

    printf("Enter the string: \n");
    scanf("%s", str);
    printf("Enter the substring: \n");
    scanf("%s", substr);
    result = countSubstring(str, substr);
    printf("countSubstring(): %d\n", result);
    return 0;
}

int countSubstring(char str[], char substr[])
{
    int result = 0, lengthmain = strlen(str), lengthsub = strlen(substr);

    if (lengthsub > lengthmain)
    {
        return result;
    }

    for (int i = 0; i < lengthmain; i++)
    {
        if (str[i] == substr[0])
        {
            for (int j = 0; j < lengthsub; j++)
            {
                if (str[i + j] == substr[j])
                {
                    if (j == lengthsub - 1)
                    {
                        result += 1;
                    }
                }
                else
                {
                    break;
                }
            }
        }
    }

    return result;
}