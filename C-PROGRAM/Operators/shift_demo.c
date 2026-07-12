#include <stdio.h>   // Standard input-output library include

int main() {
    int num;   // Declare variable

    // Input a number
    printf("Enter a number:- ");
    scanf("%d", &num);

    // Left shift operator (multiply by 2 for each shift
    printf("num << 1 = %d\n", num << 1);   // Shift left by 1 bit
    printf("num << 2 = %d\n", num << 2);   // Shift left by 2 bits

    // Right shift operator (divide by 2 for each shift)
    printf("num >> 1 = %d\n", num >> 1);   // Shift right by 1 bit
    printf("num >> 2 = %d\n", num >> 2);   // Shift right by 2 bits

    return 0;   // End program
}

