#include<stdio.h>

void grader(int score){
    if (score<44){
        printf("Grade = F\n");
    } else if (score<54){
        printf("Grade = D\n");
    } else if (score<64){
        printf("Grade = C\n");
    } else if (score<74){
        printf("Grade = B\n");
    } else if (score<=100) {
        printf("Grade = A\n");
    } else {
        printf("INVALID AH SIA\n");
    }
}

int main(void){
    while (1){
        int student_id;
        printf("Enter Student ID: ");
        scanf("%d", &student_id);
        if (student_id != -1){
            int student_score;
            printf("Enter Mark: ");
            scanf("%d", &student_score);
            grader(student_score);
        } else {
            printf("END OF PROGRAMME\n");
            break;
        }
    }
}

