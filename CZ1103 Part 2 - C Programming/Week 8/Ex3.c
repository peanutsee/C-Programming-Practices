#include<stdio.h>

int main(){
    int height;
    printf("Enter height (1 to 10): ");
    scanf("%d", &height);

    int n = 1;
    int tracker = 1;
    while (tracker <= height){
        if (n>3){
            n = 1;
        }
        for (int i=0;i<tracker;i++){
            printf("%d", n);
        }
        printf("\n");
        n++;
        tracker++;
    }
}
