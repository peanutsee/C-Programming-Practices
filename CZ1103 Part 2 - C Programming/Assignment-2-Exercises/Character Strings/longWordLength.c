#include <stdio.h>
#include <string.h>
int longWordLength(char *s);
int main()
{
    char str[80], *p;
    printf("Enter a string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n')) *p = '\0';
    printf("longWordLength(): %d\n", longWordLength(str));
    return 0;
}
int longWordLength(char *s)
{
    /* Write your code here */
    int maxLength=0, tempLength=0, i=0;
    for (i; s[i]!='\0'; i++)
    {
        if ((s[i]>='a' && s[i]<='z') || ((s[i]>='A') && s[i]<='Z')) tempLength++;
        else
        {
            maxLength = maxLength < tempLength? tempLength:maxLength;
            tempLength=0;
        }
    }
    return maxLength;
}
