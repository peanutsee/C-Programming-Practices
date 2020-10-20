#include <stdio.h>

int main()
{
    int salary, merit;

    printf("Enter the salary: \n");
    scanf("%d", &salary);
    printf("Enter the merit: \n");
    scanf("%d", &merit);

    /* Write your program code here */
    char result;
    if (salary>=700 && salary<=899)
    {
        if (salary>=700 && salary<=799)
        {
            if (merit<20)
            {
                result = 'B';
            }
            else
            {
                result = 'A';
            }
        }
    }
    else if (salary>=600 && salary<=799)
    {
        if (merit<10)
        {
            result = 'C';
        }
        else
        {
            result = 'B';
        }
    }
    else if (salary>=500 && salary<=649)
    {
        result = 'C';
    }
    printf("The grade: %c\n", result);
    return 0;
}
