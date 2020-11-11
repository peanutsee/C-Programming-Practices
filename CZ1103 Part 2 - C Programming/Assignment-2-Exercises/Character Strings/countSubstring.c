#include <stdio.h>
#include <string.h>
#define INIT_VALUE -1

int countSubstring(char str[], char substr[]);

int main()
{
    char str[80], substr[80], *p;
    int result=INIT_VALUE;
    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n')) *p = '\0';
    printf("Enter the substring: \n");
    fgets(substr, 80, stdin);
    if (p=strchr(substr,'\n')) *p = '\0';
    result = countSubstring(str, substr);
    printf("countSubstring(): %d\n", result);
    return 0;
}

int countSubstring(char str[], char substr[])
{
    /* Write your program code here */
    int counter = 0;
    int j = 0;

    for (int i=0; str[i] != '\0'; i++)
    {
        if (str[i] == substr[j])
        {
            for (j; substr[j] != '\0'; j++)
            {
                if (substr[j] != str[j+i])
                {
                    break;
                }
            }
            if (substr[j] == '\0')
            {
                counter ++;
                j = 0;
            }
        }
    }
    return counter;
}
