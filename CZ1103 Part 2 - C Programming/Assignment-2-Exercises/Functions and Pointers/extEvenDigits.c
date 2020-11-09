#include <stdio.h>
#define INIT_VALUE 999

int extEvenDigits1(int num);
void extEvenDigits2(int num, int *result);

int main()
{
    int number, result = INIT_VALUE;
    printf("Enter a number: \n");
    scanf("%d", &number);
    printf("extEvenDigits1(): %d\n", extEvenDigits1(number));
    extEvenDigits2(number, &result);
    printf("extEvenDigits2(): %d\n", result);
    return 0;
}

int extEvenDigits1(int num)
{
    /* Write your code here */
    int result[INIT_VALUE];
    int output = 0;
    int tracker = 0;

    do
    {
        int last_digit = num % 10;
        if (last_digit % 2 == 0)
        {
            result[tracker] = last_digit;
            tracker++;
        }
        num /= 10;
    }
    while (num != 0);

    if (tracker == 0) return -1;

    for (int i=0; i<tracker; i++)
    {
        output += result[i] * pow(10,i);
    }
    return output;
}

void extEvenDigits2(int num, int *result)
{
    /* Write your code here */
    int result_array[INIT_VALUE];
    int tracker = 0;
    (*result) = 0;

    do
    {
        int last_digit = num % 10;
        if (last_digit % 2 == 0)
        {
            result_array[tracker] = last_digit;
            tracker++;
        }
        num /= 10;
    }
    while (num != 0);

    if (tracker == 0) (*result) = -1;

    else
    {
        for (int i=0; i<tracker; i++)
        {
            (*result) += result_array[i] * pow(10,i);
        }
    }
}
