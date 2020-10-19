#include <stdio.h>

int main()
{
   /* Write your program code here */
   double current, resistance;
   printf("Enter the current:\n");
   scanf("%lf", &current);
   printf("Enter the resistance:\n");
   scanf("%lf", &resistance);
   double result = pow(current, 2) * resistance;

   printf("The power loss: %0.2f", result);

   return 0;
}
