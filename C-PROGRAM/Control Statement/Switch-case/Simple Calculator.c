// Author: Amit Gupta
// Date: 28 July 2026
#include <stdio.h>

int main() {
    char operation = '+'; // Step 1: Define operation
    int a = 10, b = 5;    // Step 2: Define numbers

    // Step 3: Use switch-case
    switch(operation) {
        case '+':
            printf("Sum => %d\n", a + b); // Addition
            break;
        case '-':
            printf("Difference => %d\n", a - b); // Subtraction
            break;
        case '*':
            printf("Product => %d\n", a * b); // Multiplication
            break;
        case '/':
            printf("Quotient => %d\n", a / b); // Division
            break;
        default:
            printf("Invalid operation\n"); // Default case
    }
    return 0;
}

