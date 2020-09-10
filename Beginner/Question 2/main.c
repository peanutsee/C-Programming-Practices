#include <stdio.h>

int main(void){
    int n1, n2;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);

    while (!((n1+n2) % 3 == 0)){
        printf("Enter first number: ");
        scanf("%d", &n1);
        printf("Enter second number: ");
        scanf("%d", &n2);
    }

    if (n1==n2){
        printf(n1);
    }
    else if (n1 > n2){
        for (int i=n2;i<=n1;i++){
            printf("%d ", i);
        }
    }
    else {
        for (int i=n1;i<=n2;i++){
                printf("%d ", i);
        }
    }
}
