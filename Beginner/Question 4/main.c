#include <stdio.h>

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
