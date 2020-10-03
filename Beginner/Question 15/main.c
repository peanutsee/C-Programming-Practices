#include<stdio.h>
#include <stdbool.h>

int main(){
    char string[] = "darryl";
    int n = 0;
    bool not_end = true;
    while (not_end){
        if (string[n] == NULL){
            break;
        }
        n++;
    }
    printf("%d", n);
    return 0;
}
