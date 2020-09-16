#include <stdio.h>
#include <stdbool.h>
/*
Implement the is_even function. The is_even function takes in a number n (type: int ) as its
parameter. It will return true if n is even, otherwise it returns false .
*/
bool is_even(int n){
    if (n%2==0){
        return true;
    } else {
        return false;
    }
}


int main(void){
    printf("%d", is_even(2));
}
