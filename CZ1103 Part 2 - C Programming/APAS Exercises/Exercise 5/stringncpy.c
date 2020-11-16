#include <stdio.h>
#include <ctype.h>
char *stringncpy(char *s1, char *s2, int n);
int main()
{
   char sourceStr[40], targetStr[40], *target;
   int length;   
   printf("Enter the string: \n");
   gets(sourceStr);
   printf("Enter the number of characters: \n");
   scanf("%d", &length);   
   target = stringncpy(targetStr, sourceStr, length);
   printf("stringncpy(): %s\n", target);
   return 0;
}

char *stringncpy(char *s1, char *s2, int n)
{
   /* Write your program code here */
   int i=0;
   for (i; i<n; i++)
   {
       //printf("i: %d\n", i);
       if (isalpha(s2[i]))
       {
           //printf("%c\n", s2[i]);
           s1[i] = s2[i];
       }
           
       else s1[i] = '*'; // Appends custom character to EOF
   }
   s1[n] = '\0'; // NULL character at EOF
   return s1;
}
