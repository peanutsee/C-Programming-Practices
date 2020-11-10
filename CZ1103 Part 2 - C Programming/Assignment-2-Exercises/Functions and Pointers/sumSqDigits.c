#include <stdio.h>

int sumSqDigits1(int num);
void sumSqDigits2(int num, int *result);

int main()
{
    int num, result;
    printf("Enter a number: \n");
    scanf("%d", &num);
    printf("sumSqDigits1(): %d\n", sumSqDigits1(num));
    sumSqDigits2(num, &result);
    printf("sumSqDigits2(): %d\n", result);
    return 0;
}

int sumSqDigits1(int num)
{
    /* Write your code here */
    int result;

    do
    {
        int last_digit = num % 10;
        result += pow(last_digit, 2);
        num /= 10;
    }
    while (num != 0);
    return result;

}

void sumSqDigits2(int num, int *result)
{
    /* Write your code here */
    *result = 0;
    do
    {
        int last_digit = num % 10;
        (*result) += pow(last_digit, 2);
        num /= 10;
    }
    while (num != 0);
}
