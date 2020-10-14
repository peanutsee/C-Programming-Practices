#include <stdio.h>
void exercise_3(int *num1, int *num2)
{
    printf("%d", *num1 + *num2);
}

int main()
{   int num1, num2;
    int *ptr1, *ptr2;

    printf("Input the first number: ", &num1);
    scanf("%d", &num1);
    printf("Input the second number: ", &num2);
    scanf("%d", &num2);
    
    ptr1 = &num1;
    ptr2 = &num2;

    exercise_3(ptr1, ptr2);
    return 0;
}
