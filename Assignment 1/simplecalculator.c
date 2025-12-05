#include <stdio.h>
int main(){
    double num1, num2, result;
    char operator;
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    printf("Chose an operation (+, -, *, /): ");
    scanf(" %c", &operator);

    switch(operator){
    case '+':
        result = num1 + num2;
        printf("Result: %.2lf + %.2lf = %.2lf\n" , num1, num2, result);
        break;
    case '-':
        result = num1 - num2;
        printf("Result: %.2lf - %.2lf = %.2lf\n" , num1, num2, result);
        break;
    case '*':
        result = num1 * num2;
        printf("Result: %.2lf * %.2lf = %.2lf\n" , num1, num2, result);
        break;
    case '/':
        if (num2 == 0) {
            printf("Error: Division by zero is not allowed!\n");
        } else {
             result = num1 / num2;
             printf("Result: %.2lf / %.2lf = %.2lf\n" , num1, num2, result);
        }
        break;

        default:
        printf("Invalid operation! Please choose +, -, *, or /\n");

        return 0;
    }

}
