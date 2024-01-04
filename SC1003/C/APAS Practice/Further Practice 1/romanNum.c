#include <stdio.h>

#define TRUE 1
#define FALSE 0

int romanNum(char *str);

int main()
{
    int num;
    char roman[10];
    printf("Enter a Roman number: \n");
    scanf("%s", roman);
    num = romanNum(roman);
    printf("romanNum(): %d\n", num);
    return 0;
}

int romanNum(char *str)
{
    int result = 0;
    char *p = str;

    while (*p != '\0')
    {
        switch (*p)
        {
        case 'I':
            p++;
            switch (*p)
            {
            case 'I':
                p++;
                switch (*p)
                {
                case 'I':
                    p++;
                    result += 3;
                    break;

                default:
                    result += 2;
                    break;
                }
                break;

            case 'V':
                result += 4;
                p++;
                break;

            case 'X':
                result += 9;
                p++;
                break;

            default:
                result += 1;
                break;
            }
            break;

        case 'V':
            p++;
            switch (*p)
            {
            case 'I':
                p++;
                switch (*p)
                {
                case 'I':
                    p++;
                    switch (*p)
                    {
                    case 'I':
                        p++;
                        result += 8;
                        break;

                    default:
                        result += 7;
                        break;
                    }
                    break;

                default:
                    result += 6;
                    break;
                }
                break;

            default:
                result += 5;
                break;
            }
            break;

        case 'X':
            p++;
            result += 10;
            break;
        }
    }
    return result;
}
