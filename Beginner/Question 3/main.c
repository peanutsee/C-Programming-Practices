#include <stdio.h>
#include <stdbool.h>
/*
Write a program that prompts for 2 numbers, and then use loops to calculate and display a list of all prime
numbers between the 2 numbers. You can assume the user will enter a start number less than end.
*/

bool prime(n){
    if (n==1){
        return 0;
    }
    for (int i=2;i<n;i++){
        if (n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(void){
    int start;
    int end;
    printf("Enter start: ");
    scanf("%d", &start);
    printf("Enter end: ");
    scanf("%d", &end);

    for (int i=start;i<=end;i++){
        if (prime(i) == 1){
            printf("%d ", i);
        }
    }
}
