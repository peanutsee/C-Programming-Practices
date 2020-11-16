#include <stdio.h>
#include <string.h>
#define INIT_VALUE -1

int palindrome(char *str);

int main()
{
   char str[80];
   int result = INIT_VALUE;
   
   printf("Enter a string: \n");
   gets(str);
   result = palindrome(str);
   if (result == 1)
      printf("palindrome(): A palindrome\n");
   else if (result == 0)
      printf("palindrome(): Not a palindrome\n");    
   else 
      printf("An error\n");      
   return 0;
}

int palindrome(char *str)
{
   /* Write your code here */
   int len = strlen(str), i=0, j;
   char palindrome[len];
   
   for (j=len-1; j>-1; j--)
   {
       palindrome[i] = str[j];
       i++;
   }
   return strcmp(palindrome, str) == 0? 1:0;
}
