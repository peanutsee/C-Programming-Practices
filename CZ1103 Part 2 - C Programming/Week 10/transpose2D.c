#include <stdio.h>
int size;

void transpose2D(int ar[][size], int rowSize, int colSize);
void display(int ar[][size]);

int main()
{
    printf("Enter ndim of Square Matrix:\n");
    scanf("%d", &size);

    int ar[size][size];

    printf("Enter Square Matrix of %d x %d:\n", size, size);
    for (int i=0; i<size; i++)
    {
        for (int j=0; j<size; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    printf("\nOriginal array:\n");
    display(ar);
    printf("\nTransposed Array:\n");
    transpose2D(ar, size, size);
    return 0;
}

void display(int ar[][size])
{
    for (int i=0; i<size; i++)
    {
        for (int j=0; j<size; j++)
        {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }
}

void transpose2D(int ar[][size], int rowSize, int colSize)
{
    int result[rowSize][colSize];
    for (int i=0; i<rowSize; i++)
    {
        for (int j=0; j<colSize; j++)
        {
            result[i][j] = ar[j][i];
        }
    }
    display(result);
}
