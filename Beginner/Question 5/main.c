#include <stdio.h>

int main(void){
    char user_input;
    printf("Enter a character: ");
    scanf("%c", &user_input);
    switch (user_input){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("VOWEL");
            break;
        default:
            printf("CONSONANT");
    }
}
