#include <stdio.h>

void computeTotal(int numOfLines);

int main()
{
    int numOfLines;
    printf("Enter number of lines: \n");
    scanf("%d", &numOfLines);
    computeTotal(numOfLines);
    return 0;
}

void computeTotal(int numOfLines)
{
    /* Write your code here */
    for (int i=1; i<=numOfLines; i++)
    {
        int total = 0;
        int size = 0;
        printf("Enter line %d:\n", i);
        scanf("%d", &size);
        
        for (int j=0; j<size; j++)
        {
            int temp;
            scanf("%d", &temp);
            total += temp;
        }
        printf("Total: %d\n", total);
    }
}
