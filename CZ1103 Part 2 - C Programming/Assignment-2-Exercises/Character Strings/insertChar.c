#include <stdio.h>
#include <string.h>
void insertChar(char *str1, char *str2, char ch);
int main()
{
    char a[80],b[80];
    char ch, *p;
    printf("Enter a string: \n");
    fgets(a, 80, stdin);
    if (p=strchr(a,'\n')) *p = '\0';
    printf("Enter a character to be inserted: \n");
    ch = getchar();
    insertChar(a,b,ch);
    printf("insertChar(): ");
    puts(b);
    return 0;
}
void insertChar(char *str1, char *str2, char ch)
{
    /* Write your code here */
    int counter=0, i=0, len = strlen(str1), s1_tracker=0; 
    while (s1_tracker <= len)
    {
        if (counter==3)
        {
            str2[i] = ch;
            counter=0;
            i++;
        }
        else
        {
            str2[i]=str1[s1_tracker];
            counter++;
            s1_tracker++;
            i++;
        }
    }
}
