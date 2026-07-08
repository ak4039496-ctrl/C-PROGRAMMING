#include <stdio.h>   // Standard input-output header file

int main() {
    int a = 10;      // Declare integer variable 'a' and assign value 10
    int b = 3;       // Declare integer variable 'b' and assign value 3

    // Addition operator (+) adds two numbers
    printf("Addition:- %d + %d => %d\n", a, b, a + b);

    // Subtraction operator (-) subtracts second number from first
    printf("Subtraction:- %d - %d => %d\n", a, b, a - b);

    // Multiplication operator (*) multiplies two numbers
    printf("Multiplication:- %d * %d => %d\n", a, b, a * b);

    // Division operator (/) divides first number by second
    // Note: Since both are integers, result will also be integer
    printf("Division:- %d / %d => %d\n", a, b, a / b);

    // Modulus operator (%) gives remainder of division
    printf("Modulus:- %d %% %d => %d\n", a, b, a % b);

    return 0;        // End of program, return 0 to indicate success
}

