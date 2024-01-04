#include <stdio.h>
int pryamidprinting(int heightofpyramid);
int block(int quotient);
int basepyramid (int remainderofheight);


int main()
{
    int height;
    printf("Enter the height:\n");
    scanf("%d", &height);
    printf("Pattern:\n");
    pyramidprinting(height);

    return 0;
}

int pyramidprinting(int heightofpyramid)
{
    int remainderofpyramid = heightofpyramid % 3;
    int quotientofpyramid = heightofpyramid / 3;
    if (((heightofpyramid/3) == 0 || (heightofpyramid/3) ==1) && heightofpyramid%3 ==0)
        basepyramid(remainderofpyramid);
    else
    {
        basepyramid(heightofpyramid - 3)
        + block()
        break;
    }

    return 0;
}

int basepyramid(int remainderofheight)
{
    if (remainderofheight == 1)
        printf("1\n");
    else if (remainderofheight %2 == 0)
        basepyramid(remainderofheight - 1) + printf("22\n");
    else
        basepyramid(remainderofheight - 1) + printf("333\n");

    return 0;
}

int block()
{

    return 0;
}