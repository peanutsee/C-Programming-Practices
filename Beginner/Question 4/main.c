#include <stdio.h>
#include <stdlib.h>
//Write a program that takes as input a positive integer, and displays the number of digits in that integer. Use
//ONLY concepts covered so far.
int main(void){
    int counter;
    int user_input;
    printf("Enter a number: ");
    scanf("%d", &user_input);
    while (user_input!=0){
        user_input/=10;
        counter++;
    }
    printf("Number of digits: %d", counter);
}
