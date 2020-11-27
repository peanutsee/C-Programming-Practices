// https://www.hackerrank.com/challenges/small-triangles-large-triangles/problem
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

void swap1(double *left, double *right){
    double temp = *left;
    *left = *right;
    *right = temp;
}


void swap2(triangle* tr1, triangle* tr2){
    triangle temp = *tr1;
    *tr1 = *tr2;
    *tr2 = temp;
}

void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    int i;
    double p, area, arr[n];
    
    for (i=0; i<n; i++)
    {
        p = (double)(tr[i].a + tr[i].b + tr[i].c) / 2;
        area = sqrt(p*(p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c));
        //printf("Area: %.2f\n", area);
        arr[i] = area;
    }
    int j;
    for (i=0; i<n-1; i++)
    {
        for (j=0; j<n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap1(&arr[j], &arr[j+1]);
                swap2(&tr[j], &tr[j+1]);
            }
        }
    }
}

int main()
