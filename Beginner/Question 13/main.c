#include <stdio.h>

void move_robot(int position[], char moves[], int length){
    int x = 0;
    int y = 0;
    for (int i=0;i<length;i++){
        switch(moves[i]){
        case 'N':
            x++;
            break;
        case 'S':
            x--;
            break;
        case 'W':
            y--;
            break;
        case 'E':
            y++;
            break;
        }
    }
    x = position[1] + x;
    y = position[0] + y;
    printf("(%d,%d)", y, x);
}
void main(){
    char moves[] = {'N', 'N', 'N', 'S', 'S'};
    int position[] = {1, 1};
    move_robot(position, moves, sizeof(moves)/sizeof(char));
}
