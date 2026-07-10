#include <stdio.h>   // Standard input-output library include

int main() {
    int a = 5;   // Declare and initialize variable

    // Pre-increment: value increases first, then used
    printf("Pre-increment (++a): %d\n", ++a);  // a becomes 6

    // Post-increment: value used first, then increases
    printf("Post-increment (a++): %d\n", a++); // prints 6, then a becomes 7

    // Pre-decrement: value decreases first, then used
    printf("Pre-decrement (--a): %d\n", --a);  // a becomes 6

    // Post-decrement: value used first, then decreases
    printf("Post-decrement (a--): %d\n", a--); // prints 6, then a becomes 5

    // Final value of a
    printf("Final value of a => %d\n", a);

    return 0;   // End program
}

