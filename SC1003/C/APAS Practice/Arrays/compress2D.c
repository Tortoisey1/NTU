#include <stdio.h>

#define SIZE 100

void compress2D(int data[SIZE][SIZE], int rowSize, int colSize);

int main()
{
    int data[SIZE][SIZE];
    int i, j;
    int rowSize, colSize;
    printf("Enter the array size (rowSize, colSize): \n");
    scanf("%d %d", &rowSize, &colSize);
    printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
    for (i = 0; i < rowSize; i++)
        for (j = 0; j < colSize; j++)
            scanf("%d", &data[i][j]);
    printf("compress2D(): \n");
    compress2D(data, rowSize, colSize);
    return 0;
}

void compress2D(int data[SIZE][SIZE], int rowSize, int colSize)
{
    int current, counter;

    for (int i = 0; i < rowSize; i++)
    {
        current = data[i][0];
        counter = 1;
        for (int j = 1; j < colSize; j++)
        {
            if (current == data[i][j])
            {
                counter++;
            }
            else
            {
                printf("%d ", current);
                printf("%d ", counter);
                current = data[i][j];
                counter = 1;
            }
        }
        printf("%d ", current);
        printf("%d ", counter);
        printf("\n");
    }
}