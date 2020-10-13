#include <stdio.h>
void exercise_3()
{
    int m = 300;
    double fx = 300.600006;
    char cht = 'z';

    int *pt1;
    float *pt2;
    char *pt3;
    pt1= &m;
    pt2= &fx;
    pt3= &cht;

    printf("Using & Operator\n");
    printf("Address of m: %p\n", &m);
    printf("Address of fx: %p\n", &fx);
    printf("Address of cht: %p\n\n", &cht);

    printf("Using & and * Operator\n");
    printf("Value at memory address of m: %d\n", *(&m));
    printf("Value at memory address of fx: %f\n", *(&fx));
    printf("Value at memory address of cht: %c\n\n", *(&cht));

    printf("Using only pointer operator *\n");
    printf("Value at address of m: %d\n", *pt1);
    printf("Value at address of fx: %f\n", *pt2);
    printf("Value at address of cht: %c\n", *pt3);
}

int main()
{
    exercise_3();
    return 0;
}
