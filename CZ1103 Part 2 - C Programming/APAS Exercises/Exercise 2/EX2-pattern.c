#include <stdio.h>

int main()
{
    int row, col, height;
    int num = 1;
    printf("Enter the height: \n");
    scanf("%d", &height);
    printf("Pattern: \n");

    /* Write your program code here */
    for (int i=1; i<=height; i++)
    {
        for (int j=0; j<i; j++)
        {
            if (num > 3)
            {
                num = 1;
            }
            printf("%d", num);
        }
        printf("\n");
        num++;
    }

    return 0;
}
