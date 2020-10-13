#include <stdio.h>
void exercise_2(){
    int m = 29;
    printf("Address of m: %p\n", &m); // Accessing memory address of variable m
    printf("Value of m: %d\n", m); // Value of variable m

    int *ab = &m; // Storing memory address of m in a pointer variable
    printf("Address of pointer ab: %p\n", ab); 
    printf("Content of pointer ab: %d\n", *ab); // Accessing content of at memory address

    m = 34;
    printf("Address of pointer ab: %p\n", ab); // Memory address of m
    printf("Content of pointer ab: %d\n", *ab); // Content at memory address

    *ab = 7; // Reassigning content at memory address
    printf("Address of m: %p\n", &m); // Memory address of m
    printf("Value of m: %d\n", m); // At m
}

int main(){
    exercise_2();
    return 0;
}
