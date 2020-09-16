#include <stdio.h>
#include <stdbool.h>
/*
Implement the print_even_numbers function. This function accepts a "maximum" number
as an argument and prints all the even numbers from 2 up to that maximum (inclusive), enclosed by the curly
braces.
*/
int print_even_numbers(int maximum){
    int array[maximum];
    int n = 0;
    int num = 2;
    while (num <= maximum){
        array[n] = num;
        n++;
        num+=2;
    }
    for (int i=0; i<n;i++){
        if (!(i==n-1)){
            printf("%d ", array[i]);
        } else {
            printf("%d", array[i]);
        }

    }
}

int main(void){
    printf("{");
    print_even_numbers(10);
    printf("}");
}
