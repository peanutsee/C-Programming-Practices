#include <stdio.h>

int platform1D(int ar[], int size);

int main()
{
    int i,b[50],size;
    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i=0; i<size; i++)
        scanf("%d",&b[i]);
    printf("platform1D(): %d\n", platform1D(b,size));
    return 0;
}

int platform1D(int ar[], int size)
{
    /* Write your code here */
    int temp_max = 0, max = 1;

    for (int i=0; i<size; i++)
    {
        temp_max++;
        if (ar[i] != ar[i+1])
        {
            if (temp_max > max)
            {
                max = temp_max;
            }
            temp_max = 0;
        }
    }
    return max;
}
