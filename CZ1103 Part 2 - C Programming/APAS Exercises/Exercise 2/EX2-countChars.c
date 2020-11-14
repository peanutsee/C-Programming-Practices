#include <stdio.h>
int main() 
{
   int ccount = 0, dcount = 0;
   char ch;
   printf("Enter your characters (# to end): \n");

   /* Write your program code here */
   while (1)
   {
       ch = getchar();
       if (ch == '#') break;
       if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
       {
           ccount++;
       }
       else if (ch == ' ') continue;
       else dcount ++;
   
   }
   printf("The number of digits: %d\n", dcount);
   printf("The number of letters: %d\n", ccount);
   return 0;
}
