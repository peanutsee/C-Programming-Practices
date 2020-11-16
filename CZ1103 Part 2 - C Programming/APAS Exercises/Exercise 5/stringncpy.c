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
   int i=0, len=0;
   for (len; s2[len]!='\0'; len++);
   printf("len: %d\n", len);
   
   
   for (i; i<n; i++)
   {
       if (i<len) s1[i] = s2[i]; // Condition is only true when i is less than len of s2 (source)
       else s1[i] = '#'; // Append custom EOF characters
   }
   s1[n] = '\0'; // NULL character at EOF
   return s1;
}
