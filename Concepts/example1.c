#include <stdio.h>

void main(){
    int num = 3;
    int *ptr = &num;
    printf("num = %d &num = %d\n", num, &num); // value, memory address
    printf("ptr = %p *ptr = %d\n", ptr, *ptr); // memory address, value (dereferencing)
}
