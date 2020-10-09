
#include<stdio.h>

void grader(int score){
    switch(score){
    case 75 ... 100:
        printf("Student Grade = A \n");
        break;
     case 65 ... 74:
        printf("Student Grade = B \n");
        break;
     case 55 ... 64:
        printf("Student Grade = C \n");
        break;
     case 45 ... 54:
        printf("Student Grade = D \n");
        break;
     case 0 ... 44:
        printf("Student Grade = F \n");
        break;
     default:
        printf("NO GRADE\n");
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


