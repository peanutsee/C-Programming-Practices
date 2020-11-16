#include <stdio.h>
#include <string.h>
void maxCharToFront(char *str);
int main()
{
    char str[80], *p;
    printf("Enter a string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n')) *p = '\0';
    printf("maxCharToFront(): ");
    maxCharToFront(str);
    puts(str);
    return 0;
}
void maxCharToFront(char *str)
{
    /* Write your code here */
    char max_char = str[0];
    int i, max_index=0;
    for (i=0; str[i]!='\0'; i++)
    {
        if (max_char < str[i])
        {
            max_char = str[i];
            max_index = i;
        }
    }
    
    for (max_index; max_index>=-1 ; max_index--)
    {
        str[max_index] = str[max_index-1];
    }
    str[0] = max_char;
}
