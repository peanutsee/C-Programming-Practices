#include <stdio.h>
int numDigits1(int num);
void numDigits2(int num, int *result);
int main()
{
    int number, result=0;

    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("numDigits1(): %d\n", numDigits1(number));
    numDigits2(number, &result);
    printf("numDigits2(): %d\n", result);
    return 0;
}
int numDigits1(int num)
{
    /* Write your program code here */
    int count = 0;
    do
    {
        count++;
        num /= 10;
    }
    while (num!=0);
    return count;
}
void numDigits2(int num, int *result)
{
    /* Write your program code here */
    *result = 0;
    do
    {
        (*result)++;
        num /= 10;
    }
    while (num!=0);
}
