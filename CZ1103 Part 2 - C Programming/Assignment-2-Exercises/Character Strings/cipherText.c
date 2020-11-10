#include <stdio.h>
#include <string.h>
#include <ctype.h>

void cipher(char *s);
void decipher(char *s);

int main()
{
    char str[80], dummychar, *p;
    int choice;
    printf("Select one of the following options: \n");
    printf("1: cipher() \n");
    printf("2: decipher() \n");
    printf("3: exit() \n");
    do
    {
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            scanf("%c",&dummychar);
            printf("Enter the string: \n");
            fgets(str, 80, stdin);
            if (p=strchr(str,'\n')) *p = '\0';
            printf("To cipher: %s -> ", str);
            cipher(str);
            printf("%s\n", str);
            break;
        case 2:
            scanf("%c",&dummychar);
            printf("Enter the string: \n");
            fgets(str, 80, stdin);
            if (p=strchr(str,'\n')) *p = '\0';
            printf("To decipher: %s -> ", str);
            decipher(str);
            printf("%s\n", str);
            break;
        default:
            break;
        }
    }
    while (choice < 3);
    return 0;
}

void cipher(char *s)
{
    char c;

    /* Write your program code here */
    for (int i=0; s[i] != '\0'; i++)
    {
        c = s[i];
        if (!isdigit(c))
        {
            if ('a' <= c && c <= 'z')
            {
                c++;
                if (c>122) c-=26;
                if (c<97) c+=26;
                s[i] = c;
            }
            else
            {
                c++;
                if (c>90) c-=26;
                if (c<65) c+=26;
                s[i] = c;
            }
        }
    }

}

void decipher(char *s)
{
    char c;
    /* Write your program code here */
    for (int i=0; s[i] != '\0'; i++)
    {
        c = s[i];
        if (!isdigit(c))
        {
            if ('a' <= c && c <= 'z')
            {
                c--;
                if (c>122) c-=26;
                if (c<97) c+=26;
                s[i] = c;
            }
            else
            {
                c--;
                if (c>90) c-=26;
                if (c<65) c+=26;
                s[i] = c;
            }
        }

    }
}
