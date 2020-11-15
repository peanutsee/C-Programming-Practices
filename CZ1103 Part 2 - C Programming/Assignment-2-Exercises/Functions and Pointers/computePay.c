#include <stdio.h>
double computePay1(int noOfHours, int payRate);
void computePay2(int noOfHours, int payRate, double *grossPay);
int main()
{
    int noOfHours, payRate;
    double grossPay;
    printf("Enter number of hours: \n");
    scanf("%d", &noOfHours);
    printf("Enter hourly pay rate: \n");
    scanf("%d", &payRate);
    printf("computePay1(): %.2f\n", computePay1(noOfHours, payRate));
    computePay2(noOfHours, payRate, &grossPay);
    printf("computePay2(): %.2f\n", grossPay);
    return 0;
}

/*
The company pays straight-time for the first 160 hours worked by each employee for four weeks
and pays time-and-a-half for all hours worked in excess of 160 hours.
*/

double computePay1(int noOfHours, int payRate)
{
    /* Write your code here */
    int overtime = noOfHours > 160? noOfHours - 160: 0;
    double grossPay = (noOfHours - overtime) * payRate + payRate*1.5*overtime;
    return grossPay;
}
void computePay2(int noOfHours, int payRate, double *grossPay)
{
    /* Write your code here */
    int overtime = noOfHours > 160? noOfHours - 160: 0;
    *grossPay = (noOfHours - overtime)*payRate + payRate*1.5*overtime;
}
