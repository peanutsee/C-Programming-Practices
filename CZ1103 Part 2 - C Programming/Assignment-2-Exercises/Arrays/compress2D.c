#include <stdio.h>
#define SIZE 100

void compress2D(int data[SIZE][SIZE], int rowSize, int colSize);

int main()
{
    int data[SIZE][SIZE];
    int i,j;
    int rowSize, colSize;
    printf("Enter the array size (rowSize, colSize): \n");
    scanf("%d %d", &rowSize, &colSize);
    printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
    for (i=0; i<rowSize; i++)
        for (j=0; j<colSize; j++)
            scanf("%d", &data[i][j]);
    printf("compress2D(): \n");
    compress2D(data, rowSize, colSize);
    return 0;
}

void compress2D(int data[SIZE][SIZE], int rowSize, int colSize)
{
    /* Write your code here */
    int counter, tracker;

    for (int i=0; i<rowSize; i++)
    {
        counter = 1;
        tracker = data[i][0];
        for (int j=1; j<colSize; j++)
        {
            if (tracker == data[i][j])
            {
                counter++;
            }
            else
            {
                printf("%d %d ", tracker, counter);
                tracker = data[i][j];
                counter = 1;
            }
        }

        printf("%d %d ", tracker, counter);
        puts("");
    }
}
