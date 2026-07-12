#include <stdio.h>   // Standard input-output library include

int main() {
    int a, b;   // Declare two integer variables

    // Input two numbers
    printf("Enter two numbers:- ");
    scanf("%d %d", &a, &b);

    // Demonstrate relational operators
    if(a > b)   // Greater than
        printf("%d is greater than %d\n", a, b);

    if(a < b)   // Less than
        printf("%d is less than %d\n", a, b);

    if(a >= b)  // Greater than or equal to
        printf("%d is greater than or equal to %d\n", a, b);

    if(a <= b)  // Less than or equal to
        printf("%d is less than or equal to %d\n", a, b);

    if(a == b)  // Equal to
        printf("%d is equal to %d\n", a, b);

    if(a != b)  // Not equal to
        printf("%d is not equal to %d\n", a, b);

    return 0;   // End program
}

