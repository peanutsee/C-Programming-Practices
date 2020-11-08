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
    int i=0;
    int j=0;
    int k=0;

    while (1)
    {
        printf("i=%d j=%d k=%d\n", i, j, k);
        if (str1[i] == '\0')
        {
            break;
        }
        if (k == 3)
        {
            str2[j] = ch;
            k=0;
        }

        else
        {
            str2[j] = str1[i];
            i++;
            k++;
        }
        j++;
    }
    
    // Handles EOF
    if (k == 3)
    {
        str2[j] = ch;
        str2[j+1] = '\0';
    }
    else
    {
        str2[j] = '\0';
    }
}
