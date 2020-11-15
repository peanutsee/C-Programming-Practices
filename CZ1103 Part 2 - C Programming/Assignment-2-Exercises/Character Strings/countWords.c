#include <stdio.h>
#include <string.h>
int countWords(char *s);
int main()
{
    char str[50], *p;
    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n')) *p = '\0';
    printf("countWords(): %d", countWords(str));
    return 0;
}
int countWords(char *s)
{
    /* Write your code here */
    int counter=0, i=0;
    for (i; s[i]!='\0'; i++)
    {
        if (s[i] == ' ')
        {
            counter++;
        }
    }
    return counter != 0? ++counter: 0;
}
