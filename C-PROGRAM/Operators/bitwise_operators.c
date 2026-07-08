#include <stdio.h>   // Standard input-output header file

int main() {
    int a = 6;       // Declare integer variable 'a' with value 6 (binary: 110)
    int b = 3;       // Declare integer variable 'b' with value 3 (binary: 011)

    // Bitwise AND (&) ? performs AND operation on each bit
    // 110 & 011 = 010 (decimal 2)
    printf("a & b :- %d\n", a & b);

    // Bitwise OR (|) ? performs OR operation on each bit
    // 110 | 011 = 111 (decimal 7)
    printf("a | b :- %d\n", a | b);

    // Bitwise XOR (^) ? performs XOR operation on each bit
    // 110 ^ 011 = 101 (decimal 5)
    printf("a ^ b :- %d\n", a ^ b);

    // Bitwise NOT (~) ? inverts all bits of the number
    // ~110 (for 6) ? depends on system representation (two's complement)
    printf("~a :- %d\n", ~a);

    // Left shift (<<) ? shifts bits to the left, adds zeros on right
    // 110 << 1 = 1100 (decimal 12)
    printf("a << 1 :- %d\n", a << 1);

    // Right shift (>>) ? shifts bits to the right, discards bits on right
    // 110 >> 1 = 011 (decimal 3)
    printf("a >> 1 :- %d\n", a >> 1);

    return 0;        // End of program, return 0 to indicate success
}

