/**
 * Title: Simple Calculator
 * Description: This program performs basic arithmetic operations (addition, subtraction, multiplication, division) based on user input.
 * Author: Md Abdullah
 * Date: 08/01/2026
 */

 #include <stdio.h>
#include <float.h>

int main() {
    char op;
    double a, b, res;

    printf("Simple Calculator (C Program)\n");
    printf("-----------------------------\n");

    // Read the operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op); // Added space to ignore any leftover newline

    // Read the two numbers
    printf("Enter two operands: ");
    scanf("%lf %lf", &a, &b);

    // Perform operation
    switch (op) {
        case '+':
            res = a + b;
            printf("Result: %.2lf + %.2lf = %.2lf\n", a, b, res);
            break;
        case '-':
            res = a - b;
            printf("Result: %.2lf - %.2lf = %.2lf\n", a, b, res);
            break;
        case '*':
            res = a * b;
            printf("Result: %.2lf * %.2lf = %.2lf\n", a, b, res);
            break;
        case '/':
            if(b != 0) {
                res = a / b;
                printf("Result: %.2lf / %.2lf = %.2lf\n", a, b, res);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error! Incorrect Operator Value\n");
    }

    return 0;
}
