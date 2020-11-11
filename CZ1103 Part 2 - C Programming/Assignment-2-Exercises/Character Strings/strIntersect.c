#include <stdio.h>
#include <string.h>

void strIntersect(char *str1, char *str2, char *str3);

int main()
{
    char str1[50],str2[50],str3[50];
    printf("Enter str1: \n");
    scanf("%s",str1);
    printf("Enter str2: \n");
    scanf("%s",str2);
    strIntersect(str1, str2, str3);
    if (*str3 == '\0')
        printf("strIntersect(): null string\n");
    else
        printf("strIntersect(): %s\n", str3);
    return 0;
}

void strIntersect(char *str1, char *str2, char *str3)
{
    /* Write your code here */
    int len1, len2, tracker;
    len1 = strlen(str1);
    len2 = strlen(str2);
    tracker = 0;

    for (int i=0; i<len1; i++)
    {
        for (int j=0; j<len2; j++)
        {
            if (str1[i] == str2[j])
            {
                str3[tracker] = str1[i];
                tracker++;
            }
        }
    }
    str3[tracker] = '\0';
}
