#include <stdio.h>

int factorial(int n){
    /// Factorial function
    int result = 1;
    for (int i=1;i<=n;i++){
        result *= i;
    }
    return result;
}

int nCr(int n, int r){
    /// IMPLEMENT nCr = n! / ((n-r)!(r!)
    return factorial(n)/(factorial(n-r)*factorial(r));
}

/// Similar to Binomial Series for n = 1,2,3......
int main(void){
    for (int i=0;i<=5;i++){
        printf("\n");
        for (int j=0;j<=i;j++){
            printf("%d ", nCr(i,j));
        }
    }
}
