#include <stdio.h>

int main(void){
    int user_input;
    printf("Enter a number: ");
    scanf("%d", &user_input);
    long result = 0;
    for (int i=1;i<=user_input;i++){
        if (i%7==0){
            result += i;
        }
    }
    printf("%d", result);
}
