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

    leaveRecord list[MAX];
    int go_on = 1;
    do
    {
        int idi;
        int leaves_to_take;

        int user_input;

        printf("1: getInput()\n2: mayTakeLeave()\n3: printList()\n4: exit()\n");
        printf("Enter your choice:\n");
        scanf("%d", &user_input);

        switch(user_input)
        {
        case 1:
            getInput(list, N);
            printf("INPUTS ENTERED!\n");
            break;
        case 2:

            printf("Enter ID:\n");
            scanf("%d", &idi);
            printf("Enter number of leave to take:\n");
            scanf("%d", &leaves_to_take);
            int result = mayTakeLeave(list, idi, leaves_to_take, N);
            if (result == -1)
            {
                printf("CANNOT TAKE LEAVE\n");
            }
            else
            {
                printf("LEAVE APPROVED\n");
            }
            break;
        case 3:
            printList(list, N);
            break;
        case 4:
            go_on = 0;
        }
    }
    while (go_on);
}

void getInput(leaveRecord list[ ], int *n)
{
    int tracker = 0;
    printf("Enter ID | Total Leave | Leave Taken:\n");
    for (int i=0; i<n; i++)
    {
        scanf("%d %d %d", &list[tracker].id, &list[tracker].totalLeave, &list[tracker].leaveTaken);
        tracker++;
    }
}

int mayTakeLeave(leaveRecord list[ ], int id, int leave, int n)
{
    int leaves;
    int result;
    for (int i=0; i<n; i++)
    {
        if (list[i].id == id)
        {
            leaves = leave + list[i].leaveTaken;
            result = list[i].totalLeave <= leaves? -1:0;
        }
    }
    return result;
}

void printList(leaveRecord list[ ], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("Leave Record for %d\nTotal: %d\nLeaves Taken: %d\n", list[i].id, list[i].totalLeave, list[i].leaveTaken);
    }
}
