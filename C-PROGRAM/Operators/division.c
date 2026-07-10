#include <stdio.h>   // Standard input-output library include

int main() {
    int a, b, divi = 0;   // Declare variables: a, b for input; divi for result

    // Ask user for first number
    printf("Enter your no. :- ");
    scanf("%d", &a);

    // Ask user for second number
    printf("Enter your second no. :- ");
    scanf("%d", &b);

    // Perform division (no zero check here, simple version)
    divi = a / b;

    // Print result of division
    printf("a/b Divi:-  %d", divi);

    return 0;   // End program
}

