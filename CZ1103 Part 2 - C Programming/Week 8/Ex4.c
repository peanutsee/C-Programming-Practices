#include <stdio.h>
#include <math.h>

int factorial(int n){
    int result = 1;
    for (int i=1;i<=n;i++){
        result *= i;
    }
    return result;
}

int main(){
    double user_input;
    printf("Enter X:");
    scanf("%lf", &user_input);

    double result = 1;
    for (int i=1;i<=10;i++){
        double deno = factorial(i);
        double numer = pow(user_input, i);
        result += numer/deno;
    }
    printf("%.2f", result);
}

