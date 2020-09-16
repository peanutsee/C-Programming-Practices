#include <stdio.h>
#include <stdbool.h>
/*
Implement the is_perfect_number function. It takes in a num (type: int ) and returns
the true if num is a perfect number, otherwise it returns false. A perfect number is a positive number which is
equal to the sum of all its divisors excluding itself.
*/

bool is_perfect_number(int number){
    int sum;

    for (int i=1;i<number;i++){
        if (number%i==0){
            sum += i;
        }
    }
    return (sum==number)? true: false;
}

int main(void){
  printf("%d", is_perfect_number(7));
}
