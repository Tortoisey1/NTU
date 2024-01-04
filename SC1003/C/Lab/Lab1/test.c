char *intToRoman(int num)
{
    char *answer ="";
    while (num > 0)
    {
        if (num >= 1000)
        {
            strcat(answer, "M");
            num -= 1000;
            continue;
        }
        if (num >= 900)
        {
            strcat(answer, "CM");
            num -= 900;
            continue;
        }
        if (num >= 500)
        {
            strcat(answer, "D");
            num -= 500;
            continue;
        }
        if (num >= 400)
        {
            strcat(answer, "CD");
            num -= 400;
            continue;
        }
        if (num >= 100)
        {
            strcat(answer, "C");
            num -= 100;
            continue;
        }
        if (num >= 90)
        {
            strcat(answer, "XC");
            num -= 90;
            continue;
        }
        if (num >= 50)
        {
            strcat(answer, "L");
            num -= 50;
            continue;
        }
        if (num >= 40)
        {
            strcat(answer, "XL");
            num -= 40;
            continue;
        }
        if (num >= 10)
        {
            strcat(answer, "X");
            num -= 10;
            continue;
        }
        if (num >= 9)
        {
            strcat(answer, "IX");
            num -= 9;
            continue;
        }
        if (num >= 5)
        {
            strcat(answer, "V");
            num -= 5;
            continue;
        }
        if (num >= 4)
        {
            strcat(answer, "IV");
            num -= 4;
            continue;
        }
        if (num >= 1)
        {
            strcat(answer, "I");
            num -= 1;
            continue;
        }
    }

    return answer;
}