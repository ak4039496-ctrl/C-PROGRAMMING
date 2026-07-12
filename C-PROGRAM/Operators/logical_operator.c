#include <stdio.h>   // Standard input-output library include

int main() {
    int a, b;   // Declare variables

    // Input two numbers
    printf("Enter two numbers:- ");
    scanf("%d %d", &a, &b);

    // Logical AND (true only if both conditions are true)
    if(a > 0 && b > 0)
        printf("Both numbers are positive\n");

    // Logical OR (true if at least one condition is true)
    if(a > 0 || b > 0)
        printf("At least one number is positive\n");

    // Logical NOT (inverts the condition)
    if(!(a > 0))
        printf("a is not positive\n");

    return 0;   // End program
}

