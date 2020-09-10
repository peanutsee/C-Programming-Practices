#include <stdio.h>
#include <stdlib.h>

/*
Write a program that simulates Random Number Guessing Game. The program should pick a
random number between 1 and 100 (both inclusive) and prompt the user to guess the number until he guesses
correctly. If the user’s guess is higher than the random number generated, the program should display “High!
Try again. If the user’s guess is lower than the random number generated, the program should display “Low! Try
again.
If the user guesses correctly, display the count of number of guesses the user took to get it correct and restart
the game if the user wishes to do so by entering Y at the prompt “Do you want to play again?”
*/

int main(void){
    // Generate Random Number Variable
    int random_number = rand()%9;

    int guess_counter = 1;
    int user_input;
    printf("Guess the number between 0 and 9: ");
    scanf("%d", &user_input);

    while (user_input!=random_number){
        printf("WRONG\n");
        if (user_input > random_number){
            printf("LOWER\n");
        } else {
            printf("HIGHER\n");
        }
        printf("Guess the number between 0 and 9: ");
        scanf("%d", &user_input);
        guess_counter++;
    }
    printf("WELL DONE! %d GUESSES", guess_counter);
}
