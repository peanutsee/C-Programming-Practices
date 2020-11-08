#include <stdio.h>

void printPattern2(int height);

int main()
{
    int height;
    printf("Enter the height: \n");
    scanf("%d", &height);
    printf("printPattern2(): \n");
    printPattern2(height);
    return 0;
}

void printPattern2(int height)
{
    /* Write your code here */
    for (int i=1; i<=height; i++)
    {
        for (int j=0; j<i; j++)
        {
            printf("%d", (i+j) % 10);
        }
        puts("");
    }
}
