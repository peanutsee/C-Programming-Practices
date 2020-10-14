#include <stdio.h>
/* CALL BY REFERENCE */
void exercise_5(int *num1, int *num2, int *max)
{
    if (*num1 > *num2){
        *max = *num1;
    } else {
        *max = *num2;
    }
    printf("Max: %d\n", *max);
}

int main()
{   int num1, num2, max;
    int *ptr1, *ptr2, *ptr3;

    printf("Input the first number: ", &num1);
    scanf("%d", &num1);
    printf("Input the second number: ", &num2);
    scanf("%d", &num2);
    ptr1 = &num1;
    ptr2 = &num2;
    ptr3 = &max;

    exercise_5(ptr1, ptr2, ptr3);
    return 0;
}
