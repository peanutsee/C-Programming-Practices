#include <stdio.h>

int size;

void reduceMatrix2D(int ar[][size], int rowSize, int colSize);
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
    printf("\nReduced Array:\n");
    reduceMatrix2D(ar, size, size);
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

void reduceMatrix2D(int ar[][size], int rowSize, int colSize)
{
    int e_tracker = 0;
    while (e_tracker < rowSize)
    {
        int sum = ar[e_tracker][e_tracker];
        for (int i=e_tracker+1; i<rowSize; i++)
        {
            sum += ar[i][e_tracker];
            ar[i][e_tracker] = 0;
        }
        ar[e_tracker][e_tracker] = sum;
        e_tracker++;
    }
    display(ar);
}
