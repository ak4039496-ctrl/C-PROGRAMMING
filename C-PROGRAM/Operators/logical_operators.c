#include <stdio.h>   // Standard input-output header file

int main() {
    int p = 1;       // Declare integer variable 'p' with value 1 (true)
    int q = 0;       // Declare integer variable 'q' with value 0 (false)

    // Logical AND (&&) returns true only if both operands are true
    printf("p && q :- %d\n", p && q);

    // Logical OR (||) returns true if at least one operand is true
    printf("p || q :- %d\n", p || q);

    // Logical NOT (!) returns true if operand is false, and vice versa
    printf("!p :- %d\n", !p);

    // Another example: NOT applied to q
    printf("!q :- %d\n", !q);

    return 0;        // End of program, return 0 to indicate success
}

