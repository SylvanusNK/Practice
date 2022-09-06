#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, sum, sub, div, mul;
    char operator;

    printf("Enter operator ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%d %d", &a, &b);
    switch(operator)
    {
        case '+':
            sum = a + b;
            printf("Addition of a and b is = %d", sum);
            break;
        case '-':
            sub = a - b;
            printf("Subtraction of a and b is = %d", sub);
            break;
        case '*':
            mul = a * b;
            printf("Multiplication of a and b is = %d", mul);
            break;
        case '/':
            div = a / b;
            printf("Division of a and b is = %d", div);
            break;
        default:
            printf("Enter a valid operator");
    }
    return (0);
}

