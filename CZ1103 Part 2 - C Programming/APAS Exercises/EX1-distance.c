#include <stdio.h>
#include <math.h>

int main()
{
    /* Write your program code here */
    int x1, y1, x2, y2;
    printf("Enter first point x1 y1:\n");
    scanf("%d", &x1);
    scanf("%d", &y1);

    printf("Enter second point x2 y2:\n");
    scanf("%d", &x2);
    scanf("%d", &y2);

    double result, lhs, rhs;
    lhs = pow((double)(x2-x1), 2);
    rhs = pow((double)(y2-y1), 2);
    result = sqrt(lhs + rhs);
    printf("The distance is %0.2f", result);

    return 0;
}
