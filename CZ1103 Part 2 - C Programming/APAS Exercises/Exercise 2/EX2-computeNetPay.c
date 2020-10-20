#include <stdio.h>
int main()
{
    int hours;
    float tax, grossPay, netPay;

    printf("Enter hours of work: \n");
    scanf("%d", &hours);

    /* Write your program code here */
    if (hours<=40)
    {
        grossPay = (double)hours * 6.00;
        tax = grossPay * 0.1;
        netPay = grossPay - tax;
    }
    else
    {
        int overtimeHours = hours - 40;
        double second, third;

        grossPay = (double)40 * 6.00 + (double)overtimeHours * 9.00;
        if (grossPay<=1000)
        {
            tax = grossPay * 0.1;
        }
        else if (grossPay<=1500)
        {
            second = grossPay - 1000;
            tax = 100 + second * 0.2;
        }
        else
        {
            third = grossPay - 1500;
            tax = 100 + 100 + third;
        }
        netPay = grossPay - tax;
    }

    printf("Gross pay = %.2f\n", grossPay);
    printf("Tax = %.2f\n", tax);
    printf("Net pay = %.2f\n", netPay);
    return 0;
}
