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
    int temp_count=0, max_count=0, current=ar[0];

    for (int i=0; i<size; i++)
    {
        if (ar[i] == current)
        {
            temp_count++;
            if (i==size-1)
            {
                max_count = temp_count;
            }
        }
        else 
        {
            if (temp_count > max_count) max_count = temp_count;
            current = ar[i];
        }
    }
    return max_count;
}
