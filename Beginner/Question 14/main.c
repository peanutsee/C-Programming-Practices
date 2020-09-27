#include <stdio.h>

int extract(int num, int start, int end){
    int arr1[100];
    int n = 0;
    while (num!=0){
        arr1[n] = num % 10;
        n++;
        num /= 10;
    }
    int arr2[100];
    int m = 0;
    for (int i=n-1;i>-1;i--){
        arr2[m] = arr1[i];
        m++;
    }
    for (int j=start;j<end;j++){
        printf("%d", arr2[j]);
    }
}


void main(){
    extract(123456, 3, 4);
}
