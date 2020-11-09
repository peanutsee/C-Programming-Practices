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
    int pos = 0;

    // Get position of highest ascii 
    for (int i=0; i<strlen(str); i++)
    {
        if (str[i] > str[pos])
        {
            pos = i;
        }
    }
    
    // Declare highest char
    char largest = str[pos];

    // Remove largest char by updating the current string
    for (int j=pos; j>0; j--)
    {
        str[j] = str[j-1];
    }
    
    // Re-assign str[0] with largest char
    str[0] = largest;
}
