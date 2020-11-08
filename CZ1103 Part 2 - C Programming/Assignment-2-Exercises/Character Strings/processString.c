#include <stdio.h>
#include <string.h>
void processString(char *str, int *totVowels, int *totDigits);

int main()
{
    char str[50], *p;
    int totVowels, totDigits;
    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n')) *p = '\0';
    processString(str, &totVowels, &totDigits);
    printf("Total vowels = %d\n", totVowels);
    printf("Total digits = %d\n", totDigits);
    return 0;
}

void processString(char *str, int *totVowels, int *totDigits)
{
    /* Write your program code here */
    (*totVowels) = 0;
    (*totDigits) = 0;
    for (int i=0; str[i] != '\0'; i++)
    {
        switch(str[i])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            (*totVowels)++;
            break;
        }

        if (isdigit(str[i]))
        {
            (*totDigits)++;
        }
    }
}
