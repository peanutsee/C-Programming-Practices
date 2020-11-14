#include <stdio.h>
#include <math.h>
int main() 
{
   /* Write your program code here */
   /// sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1))
   double x1, x2, y1, y2, distance;
   
   printf("Enter first point x1 y1:\n");
   scanf("%lf %lf", &x1, &y1);
   printf("Enter second point x2 y2:\n");
   scanf("%lf %lf", &x2, &y2);
   
   distance = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
   printf("The distance is %.2f\n", distance);
   
   return 0;
}
