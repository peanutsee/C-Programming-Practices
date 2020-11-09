#include <stdio.h>
#include <string.h>
#define N 20

char *longestStrInAr(char str[N][40], int size, int *length);

int main()
{
    int i, size, length;
    char str[N][40], first[40], last[40], *p, *result;
    char dummychar;
    printf("Enter array size: \n");
    scanf("%d", &size);
    scanf("%c", &dummychar);
    for (i=0; i<size; i++)
    {
        printf("Enter string %d: \n", i+1);
        fgets(str[i], 40, stdin);
        if (p=strchr(str[i],'\n')) *p = '\0';
    }
    result = longestStrInAr(str, size, &length);
    printf("longest: %s \nlength: %d\n", result, length);
    return 0;
}

char *longestStrInAr(char str[N][40], int size, int *length)
{
    /* Write your code here */
    int longest_index = 0;
    (*length) = 0;
    
    for (int i=0; i<size; i++)
    {
        int temp_len = strlen(str[i]);
        if (temp_len > (*length))
        {
            (*length) = temp_len;
            longest_index = i;
        }
    }
    
    return str[longest_index];
}
