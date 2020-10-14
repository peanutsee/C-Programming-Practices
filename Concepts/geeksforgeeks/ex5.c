#include <stdio.h>
/* CALL BY REFERENCE */
void exercise_4(int *num1, int *num2)
{
    printf("%d", *num1 + *num2);
}

int main()
{   int num1, num2;

    printf("Input the first number: ", &num1);
    scanf("%d", &num1);
    printf("Input the second number: ", &num2);
    scanf("%d", &num2);


    exercise_4(&num1, &num2);
    return 0;
}
