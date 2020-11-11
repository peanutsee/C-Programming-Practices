#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define SIZE 20

void main()
{
    char stack[SIZE];
    char str[SIZE] = "((()))";
    char *p;
    bool result;
    int stack_size = 0;

    printf("Enter sequence of parenthesis:\n");
    fgets(str, SIZE, stdin);
    if (p=strchr(str, '\n')) *p='\0';
    //puts(str);

    for (int i=0; str[i] != '\0'; i++)
    {
        if (stack_size == 0) // stack is empty
        {
            stack[stack_size] = str[i];
            stack_size++;
            //printf("if 1: %d\n", stack_size);

        }
        else
        {
            if (stack[stack_size-1] == '(' && str[i] == ')') // check if the next ) matches to any ( in the current stack
            {
                stack[stack_size-1] = '\0';
                stack_size--;
                //printf("if 2: %d\n", stack_size);
            }
            else
            {
                stack[stack_size] = str[i];
                stack_size++;
                //printf("else 1: %d\n", stack_size);

            }
        }
    }
    
    // output logic gate
    result = stack_size == 0? true: false;
    if (result) printf("true\n");
    else printf("false\n");
}
