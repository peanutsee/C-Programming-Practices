#include <stdio.h>
#define PI 3.1416

int main()
{
   /* Write your program code here */
   double radius, height;
   printf("Enter the radius:\n");
   scanf("%lf", &radius);
   printf("Enter the height:\n");
   scanf("%lf", &height);

   double volume, surface_area;
   volume = PI * radius * radius * height;
   surface_area = 2 * PI * pow(radius, 2) + height * 2 * PI * radius;
   printf("The volume is: %0.2f\n", volume);
   printf("The surface area is: %0.2f\n", surface_area);


   return 0;
}
