#include <stdio.h>

void main()
{
    int a = 2;
    int *p;
    int **pp;

    p = &a; // stores memory location of variable a
    pp = &p; // stores memory location of pointer variable p
    a++;
    printf("a= %d, *p= %d, **pp= %d\n", a, *p, **pp); // dereferencing
}
