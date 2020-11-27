#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, m;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int len, i, j;
    len = 2*n-1;
    int arr[len][len];
    for (i=0; i<len; i++)
    {
        for (j=0; j<len; j++)
        {
            arr[i][j] = n;
        }
    }
    
    n--;
    m=1;
    while (n!=0)
    {
        for (i=m; i<len-m; i++)
        {
            for (j=m; j<len-m; j++)
            {
                arr[i][j] = n;
            }
        }
        n--;
        m++;

    }

    for (i=0; i<len; i++)
    {
        for (j=0; j<len; j++)
        {
            printf("%d ", arr[i][j]);
        }
        puts("");
    }

    return 0;
}
// https://www.hackerrank.com/challenges/printing-pattern-2/problem
