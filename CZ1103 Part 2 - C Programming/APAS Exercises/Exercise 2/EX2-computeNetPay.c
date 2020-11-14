#include <stdio.h>
int main() 
{        
   int hours, overTime=0;
   float tax, grossPay, netPay;
      
   printf("Enter hours of work: \n");
   scanf("%d", &hours);
   /*
   (1) the basic pay rate is $6.00 per hour; 
   (2) the over-time pay rate (in excess of 40 hours) is one and a half time of the basic pay rate; 
   (3) the tax rate is 10\% of the first $1000 of the gross pay, 20\% of the next $500 and 30% of the rest.
   */

   /* Write your program code here */
   if (hours > 40) 
   {
       overTime = hours-40;
       hours = 40;
   }
   
   grossPay = hours * 6 + overTime * 9;
   
   if (grossPay <= 1000)
   {
        tax = 0.1 * grossPay;
        netPay = grossPay - tax;
   }
   else 
   {
       if (grossPay <= 1500)
       {
           tax = 100 + (grossPay - 1000) * 0.2;
           netPay = grossPay - tax;
       }
       else 
       {
           tax = 200 + (grossPay - 1500) * 0.3;
           netPay = grossPay - tax;
       }
   }

   printf("Gross pay = %.2f\n", grossPay);
   printf("Tax = %.2f\n", tax);
   printf("Net pay = %.2f\n", netPay);
   return 0;  
}
