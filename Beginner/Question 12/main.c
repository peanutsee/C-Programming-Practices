#include <stdio.h>

void add(int l, int m, int r){
    printf("%d ", l+m+r);
}

void neighbours(int arr[], int length){
    for (int i=0;i<length;i++){
        if (i==0){
            add(0, arr[i], arr[i+1]);
        } else if (i==(length-1)){
            add(arr[i-1], arr[i], 0);
        } else {
            add(arr[i-1], arr[i], arr[i+1]);
        }
    }
}

void main(){
    int arr[] = {10,20,30,40};
    neighbours(arr, 4);
}
