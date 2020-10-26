#include <stdio.h>
#include <string.h>

char *sweepSpace1(char *str);
char *sweepSpace2(char *str);

int main()
{
    char str[80],str2[80], *p;
    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n')) *p = '\0';
    strcpy(str2,str);
    printf("sweepSpace1(): %s\n", sweepSpace1(str));
    printf("sweepSpace2(): %s\n", sweepSpace2(str2));
    return 0;
}

char *sweepSpace1(char *str)
{
    /* Write your program code here */
    for (int i=0; i<strlen(str); i++)
    {
        if (str[i] == ' ')
        {
            int start = 0;
            for (int j=i; j<strlen(str)-1; j++)
            {
                if (str[j+1] == ' ')
                {
                    start++;
                    break;
                }
            }
            for (int j=i; j<strlen(str); j++)
                {
                    str[j] = str[j+1+start];
                }
        }
    }
    return str;
}

char *sweepSpace2(char *str)
{
    /* Write your program code here */
    //TODO: IMPLEMENT sweepSpace2 USING POINTERS
}
