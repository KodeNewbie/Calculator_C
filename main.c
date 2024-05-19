#include <stdio.h>

double calculator(double num1, double num2, char operator)
{
    double result;

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;
    
    case '-':
        result = num1 - num2;
        break;
    
    case '*':
        result = num1 * num2;
        break;
    
    case '/':
        if (num2 == 0)
        {
            printf("\nError: Division by 0");
            result = 0;
        }
        else 
        {
            result =  num1 / num2;
        }
        break;
    
    default:
        printf("\nInvalid operator input");
        result = 0;
        break;
    }

    return result;
}

int main()
{
    char operator;
    double num1;
    double num2;
    double result;

    printf("\nEnter the operator ( + , - , * , / ) :  ");
    scanf(" %c", &operator);

    printf("\nOperator entered = %c ", operator);

    printf("\nEnter first number : ");
    scanf("%lf", &num1);

    printf("\nEnter second number : ");
    scanf("%lf", &num2);

    result = calculator(num1, num2, operator);

    printf("\nResult : %.2lf", result);

    return 0;
}