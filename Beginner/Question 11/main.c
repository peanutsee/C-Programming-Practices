#include <stdio.h>

int array_function(int n){
    int MAX = 100;
    int array[MAX];
    int index = 0;
    while (n!=0){
        int j = n%10;
        array[index] = j;
        index++;
        n /= 10;
    }

    int index2 = 0;
    int array2[MAX];
    for (int i=index-1; i>-1;i--){
        array2[index2] = array[i];
        index2++;
    }
    if (!(index%2==0)){
        int bubble = 1;
        while (bubble < index-1){
            int a = array2[bubble];
            int b = array2[bubble+1];
            array2[bubble] = b;
            array2[bubble+1] = a;
            bubble+=2;
        }
    } else {
        int bubble = 0;
        while (bubble < index-1){
            int a = array2[bubble];
            int b = array2[bubble+1];
            array2[bubble] = b;
            array2[bubble+1] = a;
            bubble+=2;
        }
    }
    for (int i = 0;i<index;i++){
        printf("%d", array2[i]);
    }
    return 0;
}



int main(void){
    array_function(382818);
}
