#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void getFrequency(int histogram[10], int n);
void printFrequency(int histogram[10], int n);

void main()
{
    int frequencies[10];
    int total;
    printf("Please input the number of random numbers (1 and 10):\n");
    scanf("%d", &total);
    srand(time(NULL));
    getFrequency(frequencies, total);
    printf("HISTOGRAM\n");
    printFrequency(frequencies, total);
}

void getFrequency(int histogram[10], int n)
{
    for (int i=0; i<n; i++)
    {
        histogram[i] = rand()%100;
    }
    return histogram;
}

void printFrequency(int histogram[10], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("%2d - %2d  |", 10*i, 9+10*i);
        for (int j=0; j<histogram[i]; j++)
        {
            putchar('*');
        }
        printf("\n");
    }
}
