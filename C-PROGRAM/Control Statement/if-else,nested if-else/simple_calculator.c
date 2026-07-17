/*
 * Author: Amit Gupta
 * Date: 08-07-2026
 */
#include <stdio.h>

int main() {
    char op;        // Variable to store operator (+, -, *, /)
    float num1, num2;  // Variables to store two numbers

    // Ask user to enter operator
    printf("Enter operator (+, -, *, /):- ");
    scanf(" %c", &op);  // Space before %c to handle newline issues

    // Ask user to enter two numbers
    printf("Enter first number:- ");
    scanf("%f", &num1);

    printf("Enter second number:- ");
    scanf("%f", &num2);

    // If operator is '+'
    if (op == '+') {
        printf("Result:- %f\n", num1 + num2);  // Addition
    }
    // If operator is '-'
    else if (op == '-') {
        printf("Result:- %f\n", num1 - num2);  // Subtraction
    }
    // If operator is '*'
    else if (op == '*') {
        printf("Result:- %f\n", num1 * num2);  // Multiplication
    }
    // If operator is '/'
    else if (op == '/') {
        // Check if denominator is not zero
        if (num2 != 0) {
            printf("Result:- %.2f\n", num1 / num2);  // Division
        } else {
            printf("Error:- Division by zero not allowed\n");
        }
    }
    // If operator is invalid
    else {
        printf("Invalid operator\n");
    }

    return 0;  // End of program
}

