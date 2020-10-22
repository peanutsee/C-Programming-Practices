#include <stdio.h>
#define SIZE 10
void reduceMatrix2D(int ar[][SIZE], int rowSize, int colSize);
void display(int ar[][SIZE], int rowSize, int colSize);
int main()
{
   int ar[SIZE][SIZE], rowSize, colSize;
   int i,j;
   printf("Enter row size of the 2D array: \n");
   scanf("%d", &rowSize);
   printf("Enter column size of the 2D array: \n");
   scanf("%d", &colSize);
   printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
   for (i=0; i<rowSize; i++)
      for (j=0; j<colSize; j++)
         scanf("%d", &ar[i][j]);

   reduceMatrix2D(ar, rowSize, colSize);  
   printf("reduceMatrix2D(): \n");
   display(ar, rowSize, colSize);    
   return 0;         
}
void display(int ar[][SIZE], int rowSize, int colSize)
{
   int l,m;
   for (l = 0; l < rowSize; l++) {
      for (m = 0; m < colSize; m++)
         printf("%d ", ar[l][m]);
      printf("\n");
   }
}
void reduceMatrix2D(int ar[][SIZE], int rowSize, int colSize)
{       
   /* Write your program code here */
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
}
