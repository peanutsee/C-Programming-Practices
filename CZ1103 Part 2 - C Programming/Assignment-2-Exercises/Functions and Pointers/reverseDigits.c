#include <stdio.h>
int reverseDigits1(int num);
void reverseDigits2(int num, int *result);
int main()
{
    int num, result=999;
    printf("Enter a number: \n");
    scanf("%d", &num);
    printf("reverseDigits1(): %d\n", reverseDigits1(num));
    reverseDigits2(num, &result);
    printf("reverseDigits2(): %d\n", result);
    return 0;
}

int reverseDigits1(int num)
{
    /* Write your code here */
    int result = 0;
    int i = 0;
    int num1 = num;

    // Find length of number
    for (i; num !=0; i++)
    {
        num /= 10;
    }

    // Reverse
    while (num1 != 0)
    {
        int last_digit = num1 % 10;
        result += last_digit * pow(10, i-1);
        i--;
        num1 /= 10;
    }
    return result;
}

void reverseDigits2(int num, int *result)
{
    /* Write your code here */
    *result = 0;
    int i = 0;
    int num1 = num;

    // Find length of number
    for (i; num !=0; i++)
    {
        num /= 10;
    }

    // Reverse
    while (num1 != 0)
    {
        int last_digit = num1 % 10;
        (*result) += last_digit * pow(10, i-1);
        i--;
        num1 /= 10;
    }
}
