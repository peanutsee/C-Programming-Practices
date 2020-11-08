#include <stdio.h>
void specialNumbers1D(int ar[], int num, int *size);

int main()
{
    int a[20],i,size=0,num;
    printf("Enter a number (between 100 and 999): \n");
    scanf("%d", &num);
    specialNumbers1D(a, num, &size);
    printf("specialNumbers1D(): ");
    for (i=0; i<size; i++)
        printf("%d ",a[i]);
    return 0;
}

void specialNumbers1D(int ar[], int num, int *size)
{
    /* Write your code here */
    for (int i=100; i<=num; i++)
    {
        int last_digit, result=0;
        int n = i;
        while (n != 0)
        {
            last_digit = n % 10;
            result += last_digit * last_digit * last_digit;
            n /= 10;
        }
        if (result == i)
        {
            ar[(*size)] = i;
            (*size)++;
        }
    }
}
