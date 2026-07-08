#include <stdio.h>   // Standard input-output header file

int main() {
    int val = 5;     // Declare integer variable 'val' and assign value 5

    // Pre-increment (++val) ? increases value first, then uses it
    printf("Pre-increment (++val) :- %d\n", ++val);

    // Post-increment (val++) ? uses value first, then increases it
    printf("Post-increment (val++) :- %d\n", val++);

    // Current value of 'val' after post-increment
    printf("Value of val after post-increment :- %d\n", val);

    // Pre-decrement (--val) ? decreases value first, then uses it
    printf("Pre-decrement (--val) :- %d\n", --val);

    // Post-decrement (val--) ? uses value first, then decreases it
    printf("Post-decrement (val--) :- %d\n", val--);

    // Current value of 'val' after post-decrement
    printf("Value of val after post-decrement :- %d\n", val);

    return 0;        // End of program, return 0 to indicate success
}

