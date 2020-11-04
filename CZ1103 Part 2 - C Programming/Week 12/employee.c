#include <stdio.h>
#include <math.h>
#define MAX 999
#define N 3

typedef struct
{
    int id; /* staff identifier */
    int totalLeave; /* the total number of days of leave allowed */
    int leaveTaken; /* the number of days of leave taken so far */
} leaveRecord;

void getInput(leaveRecord list[ ], int *n);
int mayTakeLeave(leaveRecord list[ ], int id, int leave, int n);
void printList(leaveRecord list[ ], int n);

void main()
{
    int result1, result2;
    leaveRecord list[MAX];
    getInput(list, N);
    result1 = mayTakeLeave(list, 1, 1, N);
    printf("%d\n", result1);
    printList(list, N);
}

void getInput(leaveRecord list[ ], int *n)
{
    int tracker = 0;
    printf("Enter ID Total Leave Leave Taken:\n");
    while (n != 0)
    {
        scanf("%d %d %d", list[tracker].id, list[tracker].totalLeave, list[tracker].leaveTaken);
        n--;
        tracker++;
    }
}

int mayTakeLeave(leaveRecord list[ ], int id, int leave, int n)
{
    int leaves;
    for (int i=0; i<n; i++)
    {
        if (list[i].id == id)
        {
            leaves = leave + list[i].leaveTaken;
            return list[i].totalLeave >= leaves? 1:0;
        }
    }
    return -1;
}

void printList(leaveRecord list[ ], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("Leave Record for %d\nTotal: %d\nLeaves Taken: %d\n", list[i].id, list[i].totalLeave, list[i].leaveTaken);
    }
}
