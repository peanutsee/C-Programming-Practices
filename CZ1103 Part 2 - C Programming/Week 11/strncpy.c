#include <stdio.h>
#define INIT_VALUE 999

char *strncpy(char *s1, char *s2, int n);

int main()
{
    char s1[INIT_VALUE], *s2 = "Darryl";
    strncpy(s1, s2, 7);
    return 0;
}

char *strncpy(char *s1, char *s2, int n)
{
    int i=0;
    int len = strlen(s2);
    for (i; s2[i] != '\0' && i<n; i++)
    {
        s1[i] = s2[i];
    }

    if (n > len)
    {
        while (len < n)
        {
            s1[len] = '\0';
            len++;
        }
    }
    s1[len] = '\0';
    
    return 0;
}
