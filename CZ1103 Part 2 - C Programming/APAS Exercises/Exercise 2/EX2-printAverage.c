#include <stdio.h>
int main() 
{ 
   int total, count, lines, input;
   double average;
   int i;   

   printf("Enter number of lines: \n");
   scanf("%d", &lines);      

   /* Write your program code here */
    for (i=1; i<=lines; i++)
    {
        total = 0;
        count = 0;
        printf("Enter line %d (end with -1): \n", i);
        while (1)
        {
            scanf("%d", &input);
            if (input == -1) break;
            total += input;
            count++;
        }
        
        average = (double)total/(double)count;
        printf("Average = %0.2f\n", average);
        
    }
   return 0;
}
