#include <stdio.h>

void main(){
    int num = 5; // declare variable
    
    int *ptrl = &num; // assign variable address to pointer
                      // pointer variable does not store the value of the variable.
                      // It stores the address of the memory which is used to store the actual variable.
                      
    printf("%d\n", *ptrl); // dereferencing
    printf("%p\n", ptrl); // memory address
}
