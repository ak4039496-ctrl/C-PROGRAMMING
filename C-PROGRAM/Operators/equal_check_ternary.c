#include <stdio.h>   // Standard input-output library include

int main() {
    int a, b;   // Declare variables

    // Input two numbers
    printf("Enter 1st numbers:- ");
    scanf("%d", &a);
    printf("Enter second no.:- ");
    scanf("%d",&b);

    // Check equality using ternary operator
    (a == b) ? printf("Numbers are Equal\n") : printf("Numbers are NOT Equal\n");

    return 0;   // End program
}

