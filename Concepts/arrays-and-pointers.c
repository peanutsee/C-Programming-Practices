#include <stdio.h>

int main()
{
    int array[5];
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    array[4] = 5;

    int *pt1, *pt2, *pt3, *pt4, *pt5;
    pt1 = &array[0];
    pt2 = &array[1];
    pt3 = &array[2];
    pt4 = &array[3];
    pt5 = &array[4];

    printf("Value at %p is %d\n", pt1, array[0]); // base address
    printf("Value at %p is %d\n", pt1+1, array[1]);
    printf("Value at %p is %d\n", pt1+2, array[2]);
    printf("Value at %p is %d\n", pt1+3, array[3]);
    printf("Value at %p is %d\n", pt1+4, array[4]);
    printf("Value at %p is %d\n", pt1+5, *(pt1+5)); // prints 0 because no assigned value at memory addres
}
