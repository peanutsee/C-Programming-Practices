#include <stdio.h>
#include <string.h>
struct student{
   char name[20]; /* student name */
   double testScore; /* test score */
   double examScore; /* exam score */
   double total;  /* total = (testScore+examScore)/2 */
};

double average();

int main()
{
   printf("average(): %.2f\n", average());
   return 0;
}

double average()
{
   /* Write your program code here */
    char *p;
    struct student array[50];
    int tracker = 0;

    while (1)
    {
        scanf("\n");
        printf("Enter student name:\n");
        fgets(array[tracker].name, 20, stdin);
        // Termination condition
        if (strcmp(array[tracker].name, "END\n") == 0) break;
        if (p=strchr(array[tracker].name, '\n')) *p = '\0';

        

        printf("Enter test score:\n");
        scanf("%lf", &array[tracker].testScore);

        printf("Enter exam score:\n");
        scanf("%lf", &array[tracker].examScore);

        array[tracker].total = (array[tracker].testScore + array[tracker].examScore)/2;
        printf("Student %s total = %.2f\n", array[tracker].name, array[tracker].total);
        tracker++;
    }

    double total;

    for (int i=0; i<=tracker; i++)
    {
        total += array[i].total;
    }

    double average = total/tracker;
    return tracker != 0? average:0.00;
}
