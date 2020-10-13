#include <stdio.h>
/* CALL BY REFERENCE */

double calDistance(double *x1, double *x2, double *y1, double *y2) //  Pointers
{
    double result;
    result = pow((pow(*x2-*x1,2)+pow(*y2-*y1,2)), 0.5); // Dereferencing
    return result;
}

int main()
{
    double x1,x2,y1,y2;
    printf("ENTER VALUE FOR X1: ");
    scanf("%lf", &x1);
    printf("ENTER VALUE FOR Y1: ");
    scanf("%lf", &y1);
    printf("ENTER VALUE FOR X2: ");
    scanf("%lf", &x2);
    printf("ENTER VALUE FOR Y2: ");
    scanf("%lf", &y2);

    printf("%f\n", calDistance(&x1, &x2, &y1, &y2)); // Access contents
    return 0;
}
