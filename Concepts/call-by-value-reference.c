#include <stdio.h>

void function3(int h, int *k)
{
    *k = *k-h;
    printf("%d %d", h, *k);
}

void function2(int c, int *d)
{
    *d = *d * c;
    function3(c, d);
}

void function1(int a, int *b)
{
    *b = *b + a;
    function2(a, b);
}

void main()
{
    int x, y;
    x = 5;
    y = 5;
    function1(x,&y);
    return 0;
}

// param a, c & h are passed into the function via call by value
// param b, d & k are passed into the function via call by reference (pointers and address) - addresses are passed into the function instead of values


/*
Generally, call-by-reference is used with you need to pass more than one value back from a function and it is more efficient as compared to call by value
*/
