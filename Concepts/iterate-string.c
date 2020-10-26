#include <stdio.h>
#include <string.h>

void main()
{
    char str[] = "Darryl See";
    printf("%s\n", str);
    printf("%d\n", strlen(str));
    
    for (int i=0; i<strlen(str); i++)
    {
        if (str[i] == ' ')
        {
            for (int j=i; j<strlen(str); j++)
            {
                str[j] = str[j+1];
            }
        }
    }
    
    printf("%s\n", str);
    printf("%d\n", strlen(str));
}
