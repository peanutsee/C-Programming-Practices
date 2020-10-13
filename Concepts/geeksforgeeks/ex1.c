#include <stdio.h>
void exercise_1(){
    int m = 10;
    int n, o;
    int *z = &m; // pointer *z stores memory address of m
    printf("z stores the address of m: %p\n", z); // memory address of m
    printf("z stores the address of m: %d\n", *z); // dereferencing
    printf("&m stores address of m: %p\n", &m); // memory address of m
    printf("&n stores the address of n: %p\n", &n); // memory address of n
    printf("&o stores the address of o: %p\n", &o); // memory address of o
    printf("&z stores the address of z: %p\n", &z); // memory address of z (pointer variable)
}

int main(){
    exercise_1();
    return 0;
}
