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
   double globalTotal, count=0;
   struct student s;
   char *p;
   
   while (1)
   {
       printf("Enter student name:\n");
       scanf("\n");
       fgets(s.name, 20, stdin);
       if (p=strchr(s.name, '\n')) *p='\0';
       if (strcmp(s.name, "END")==0) break;
       
       printf("Enter test score:\n");
       scanf("%lf", &s.testScore);
       
       printf("Enter exam score:\n");
       scanf("%lf", &s.examScore);
       
       s.total = (s.testScore + s.examScore) / 2;
       printf("Student %s total = %.2f\n", s.name, s.total);
       
       globalTotal += s.total;
       count++;
   }
   return count==0?0:globalTotal/count;
}
