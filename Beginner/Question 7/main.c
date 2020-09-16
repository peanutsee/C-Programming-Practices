#include <stdio.h>
#include <stdbool.h>
/*
Implement the following functions:
a. max2() that takes as input two integers, and returns the maximum of the two integers.
b. max3() that takes as input 3 integers, and returns the maximum of the 3 integers. The function should
call max2() .
*/

int max2(int num1, int num2){
    if (num1 > num2){
        return num1;
    } else if (num1 < num2){
        return num2;
    } else {
        return num1;
    }
}

int max3(int num1, int num2, int num3){
    int max_num1 = max2(num1, num2);
    int max_num2 = max2(num2, num3);
    int max_num3 = max2(max_num1, max_num2);
    return max_num3;
}

int main(void){
    printf("%d\n", max2(1,2));
    printf("%d", max3(7,4,3));

}
