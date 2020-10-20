#include <stdio.h>

int factorial(int n)
{
    int fac = 1;
    for (int i=1; i<=n; i++)
    {
        fac *= i;
    }
    return fac;
}

int main()
{
   int n, denominator = 1;
   float x, result = 1.0, numerator = 1.0;

   printf("Enter x: \n");
   scanf("%f", &x);

   /* Write your program code here */
   for (int i=1;i<=10;i++)
   {
       int factor = factorial(i);
       result += (double)pow(x,i) / factor;
   }

   printf("Result = %.2f\n",  result);
   return 0;
}
