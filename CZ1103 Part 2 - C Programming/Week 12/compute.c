#include <stdio.h>

typedef struct
{
    float operand1, operand2;
    char op; /* operator ‘+’,‘‐’,‘*’ or ‘/’ */
} bexpression;

float compute1(bexpression expr);
float compute2(bexpression *expr);

void main()
{
    bexpression Bex;
    printf("Enter operand1:\n");
    scanf("%f", &Bex.operand1);
    printf("Enter operand2:\n");
    scanf("%f", &Bex.operand2);
    fflush(stdin);
    printf("Enter operator:\n");
    scanf("%c", &Bex.op);

    float result1, result2;
    result1 = compute1(Bex);
    result2 = compute2(&Bex);
    printf("Result 1: %f\n", result1);
    printf("Result 2: %f\n", result2);
}


float compute1(bexpression expr)
{
    float result;
    switch (expr.op)
    {
    case '+':
        result = expr.operand1 + expr.operand2;
        break;
    case '-':
        result = expr.operand1 - expr.operand2;
        break;
    case '/':
        result = expr.operand1 / expr.operand2;
        break;
    case '*':
        result = expr.operand1 * expr.operand2;
        break;
    }
    return result;
}


float compute2(bexpression *expr)
{
    float result;
    switch (expr->op)
    {
    case '+':
        result = expr->operand1 + expr->operand2;
        break;
    case '-':
        result = expr->operand1 - expr->operand2;
        break;
    case '/':
        result = expr->operand1 / expr->operand2;
        break;
    case '*':
        result = expr->operand1 * expr->operand2;
        break;
    }
    return result;
}
