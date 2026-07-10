#include <stdio.h>   // Standard input-output library include

int main() {
    int a, b, c;   // Declare variables

    // Using comma operator to evaluate multiple expressions
    c = (a = 5, b = 10, a + b);  
    // Step 1: a = 5
    // Step 2: b = 10
    // Step 3: a + b (final value assigned to c)

    // Print results
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    return 0;   // End program
}

