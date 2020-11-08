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
    char start = 'A';

    for (int i=1; i<=height; i++)
    {

        // A start
        if (start == 'A')
        {
            int t1 = 0;
            for (int j=0; j<i; j++)
            {
                if (t1==0)
                {
                    printf("%c", 'A');
                    t1 = 1;
                }
                else
                {
                    printf("%c", 'B');
                    t1 = 0;
                }
            }
            start = 'B';
            puts("");
        }
        // B start
        else
        {
            int t2 = 0;
            for (int j=0; j<i; j++)
            {
                if (t2==0)
                {
                    printf("%c", 'B');
                    t2 = 1;
                }
                else
                {
                    printf("%c", 'A');
                    t2 = 0;
                }
            }
            start = 'A';
            puts("");
        }
    }
}
