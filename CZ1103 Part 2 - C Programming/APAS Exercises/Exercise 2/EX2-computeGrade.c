#include <stdio.h>
#include <stdbool.h>

int main()
{
    /* insert variable declarations here */
    int mark, studentNumber;


    int not_stopped = true;
    while (not_stopped)
    {
        /* Write your program code here */
        printf("Enter Student ID: \n");
        scanf("%d", &studentNumber);
        if (studentNumber == -1)
        {
            not_stopped = false;
            break;
        }
        printf("Enter Mark:\n");
        scanf("%d", &mark);
        switch (mark)
        {
        case  0 ... 44:
            printf("Grade = F\n");
            break;
        case 45 ... 54:
            printf("Grade = D\n");
            break;
        case 55 ... 64:
            printf("Grade = C\n");
            break;
        case 65 ... 74:
            printf("Grade = B\n");
            break;
        case 75 ... 100:
            printf("Grade = A\n");
            break;
        default:
            printf("NO MARKS\n");
        }
    }
    return 0;
}
