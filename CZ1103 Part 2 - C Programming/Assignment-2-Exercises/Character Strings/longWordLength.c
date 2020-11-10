#include <stdio.h>
#include <string.h>

int longWordLength(char *s);

int main()
{
    char str[80], *p;
    printf("Enter a string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n')) *p = '\0';
    printf("longWordLength(): %d\n", longWordLength(str));
    return 0;
}

int longWordLength(char *s)
{
    /* Write your code here */
    int counter, max_counter;
    counter = 0;
    max_counter = 0;
    for (int i=0; s[i] != '\0'; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            counter++;

        }
        else
        {
            if (max_counter <= counter)
            {
                max_counter  = counter;
            }
            counter = 0;
        }
    }
    return max_counter;
}
