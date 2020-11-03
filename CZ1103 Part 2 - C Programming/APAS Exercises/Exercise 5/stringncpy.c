#include <stdio.h>
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
    int track = 0;
    int i=0;
    for (i; i<n; i++)
    {
        s1[i] = s2[i];
        track++;
    }
    if (track < n)
    {
        for (int j=0; j<n-track; j++)
        {
            s1[i] = '\0';
        }
    }
    return s1;
}
