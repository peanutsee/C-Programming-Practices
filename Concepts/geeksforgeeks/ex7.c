#include <stdio.h>
void main()
{
    int len_array;
    printf("Input the number of elements to store in the array: ");
    scanf("%d", &len_array);
    printf("Input %d numbers of element the array :\n", len_array);
    int array[len_array];
    for (int j=0; j<len_array; j++)
    {
        printf("element - %d : ", j);
        scanf("%d", array+j); // Adds to next memory address in array
        //printf("%p\n", array+j);
    }

    printf("The elements you entered are:\n");
    for (int i=0; i<len_array; i++)
    {
        //printf("%p\n", array+i);
        printf("element - %d : %d\n", i, *(array + i));
    }
}
