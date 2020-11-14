#include <stdio.h>
int main() 
{ 
   int salary, merit;
               
   printf("Enter the salary: \n");
   scanf("%d", &salary);
   printf("Enter the merit: \n");   
   scanf("%d", &merit);        
    
    /*
    The salary scheme for a company is given as follows:
    
    Salary range for grade A: $700 - $899
    Salary range for grade B: $600 - $799
    Salary range for grade C: $500 - $649
    In addition, a person whose salary is between $600 and $649 is in grade C if his merit points are below 10, 
    otherwise he is in grade B. 
    A person whose salary is between $700 and $799 is in grade B if his merit points are below 20, otherwise he is in grade A.
        
    */
   /* Write your program code here */
    if (salary >= 700 && salary <= 899)
    {
        if (salary >= 700 && salary <= 799)
        {
            if (merit < 20)
            {
                printf("The grade: B\n");
            }
            else
            {
                printf("The grade: A\n");
            }
        }
        else 
        {
            printf("The grade: A\n");
        }
    }
    else if (salary >= 600 && salary <= 799)
    {
        if (salary >= 600 && salary <= 649)
        {
            if (merit < 10)
            {
                printf("The grade: C\n");
            }
            else 
            {
                printf("The grade: B\n");
            }
        }
        else 
        {
            printf("The grade: B\n");
        }
    }
    else
    {
        printf("The grade: C\n");
    }
    
    
   return 0;  
}
