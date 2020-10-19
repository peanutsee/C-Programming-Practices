#include <stdio.h>
int main()
{
   /* Write your program code here */
   double distance, time;
   printf("Enter distance (in km):\n");
   scanf("%lf", &distance);
   printf("Enter time (in sec):\n");
   scanf("%lf", &time);

   double result = distance / time;
   printf("The speed is %0.2f km/sec", result);
   return 0;
}
