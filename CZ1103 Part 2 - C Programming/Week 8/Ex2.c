#include <stdio.h>
#include <math.h>

double averager(int n){
    double result = 0;
    int length = 0;

    while (n!=0){
        int last_digit = n % 10;
        if (last_digit == -1){
            break;
        }
        result += last_digit;
        length++;
        n/=10;
    }
    result /= length;
    return result;
}

int main(){
    int number_of_lines;
    printf("Enter number of lines: ");
    scanf("%d", &number_of_lines);

    int init = number_of_lines;
    int tracker = 1;
    while (init >= 0){
        int user_input;
        printf("Enter line %d (end with -1): ", tracker);
        scanf("%d", &user_input);

        printf("%.2f\n",averager(user_input));
        tracker++;
        init--;
    }
}

