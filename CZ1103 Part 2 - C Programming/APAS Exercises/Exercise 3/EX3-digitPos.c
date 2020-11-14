#include <stdio.h>
int digitPos1(int num, int digit);
void digitPos2(int num, int digit, int *result);
int main()
{
   int number, digit, result=0;

   printf("Enter the number: \n");
   scanf("%d", &number);
   printf("Enter the digit: \n");
   scanf("%d", &digit);            
   printf("digitPos1(): %d\n", digitPos1(number, digit));           
   digitPos2(number, digit, &result);          
   printf("digitPos2(): %d\n", result);   
   return 0;
}

int digitPos1(int num, int digit) 
{
   /* Write your program code here */
   int index = 1;
   while (num != 0)
   {
       int last_digit = num % 10;
       if (last_digit == digit)
       {
           return index;
       }
       else 
       {
           index++;
       }
       num /= 10;
   }
   return 0;
}

void digitPos2(int num, int digit, int *result) 
{
   /* Write your program code here */
   int index = 1;
   while (num != 0)
   {
       int last_digit = num % 10;
       if (last_digit == digit)
       {
           (*result) = index;
       }
       else 
       {
           index++;
       }
       num /= 10;
   }
}
