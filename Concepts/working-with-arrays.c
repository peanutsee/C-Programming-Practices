#include<stdio.h>

void multiplier(int *array)
{
    int *ptr = array; // initial pointer points to the first element in the array
    for (int i=0; i<5; i++)
    {
        printf("Before: %d\n", *ptr);
        *ptr = *ptr + 2; // increment content in ptr location
        printf("After: %d\n", *ptr);
        *ptr++;
    }
}


int main()
{
    int array_2d[3][3] = {{1,2,3},
        {4,5,6},
        {7,8,9}
    };

    // ndim of array
    int row, column;
    row = sizeof(array_2d)/sizeof(array_2d[0]);
    column = sizeof(array_2d[0])/sizeof(array_2d[0][0]);
    printf("Column length of array_2d: %d\n", row);
    printf("Row length of array_2d: %d\n", column);

    // accessing each element and multiplying them by 2 (indexing)
    for (int i=0; i<column; i++)
    {
        for (int j=0; j<row; j++)
        {
            array_2d[i][j] = array_2d[i][j] * 2;
            printf("%d ", array_2d[i][j]);
        }
        printf("\n");
    }

    // Accessing array_1d
    int array_1d[5] = {1,2,3,4,5};
    multiplier(&array_1d);
}

