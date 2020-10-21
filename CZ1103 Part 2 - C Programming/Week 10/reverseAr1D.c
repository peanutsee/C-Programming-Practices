#include <stdio.h>
void printReverse1(int ar[], int size);
void printReverse2(int ar[], int size);
void reverseAr1D(int ar[], int size);

int main()
{
    int ar[80];
    int size, i;
    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i=0; i <= size-1; i++)
        scanf("%d", &ar[i]);
    printReverse1(ar, size);
    printReverse2(ar, size);
    reverseAr1D(ar, size);
    printf("reverseAr1D(): ");
    if (size > 0)
    {
        for (i=0; i<size; i++)
            printf("%d ", ar[i]);
    }
    return 0;
}

void printReverse1(int ar[], int size)
{
    /* Write your code here – using index */
    printf("printReverse1(): ");
    for (int i=size-1; i>-1; i--)
    {
        printf("%d ", ar[i]);
    }
    printf("\n");
}

void printReverse2(int ar[], int size)
{
    /* Write your code here – using pointer */
    printf("printReverse2(): ");
    int *ptr = ar;
    for (int i=size-1; i>-1; i--)
    {
        printf("%d ", *(ptr+i));
    }
    printf("\n");
}

void reverseAr1D(int ar[], int size)
{
    /* Write your code here */
    int *ptr = &ar[0];
    int rev_ar[size];
    int j = 0;

    for (int i=size-1; i>-1; i--)
    {
        rev_ar[j] = ar[i];
        j++;
    }

    for (int m=0; m<size; m++)
    {
        *(ptr+m) = rev_ar[m];
    }
}
