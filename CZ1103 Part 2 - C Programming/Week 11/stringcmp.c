#include <stdio.h>

char *stringcmp(char *s1, char *s2);

void main()
{
    int result = stringcmp("darryl", "darryl");
    printf("%d", result);
}

char *stringcmp(char *s1, char *s2)
{
    int i=0;
    for (i; s1[i] != '\0' || s2[i] != '\0'; i++)
    {
        if (s1[i] != s2[i])
        {
            if (s1[i] > s2[i])
            {
                return 1;
            }
            else
            {
                return -1;
            }
        }
    }
    return 0;
}
