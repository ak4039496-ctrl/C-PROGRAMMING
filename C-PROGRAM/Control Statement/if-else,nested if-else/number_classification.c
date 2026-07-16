/*
 * Author: Amit Gupta
 * Date: 08-07-2026
 */

#include <stdio.h>

int main() {
    long num;  // Variable to store the number

    // Ask user to enter a number
    printf("Enter a number:- ");
    scanf("%ld", &num);

    // Print the entered number
    printf("You entered:- %ld\n", num);

    // Check if number is positive, negative, or zero
    if (num > 0) {
        // Nested check for single-digit or multi-digit
        if (num >= 1 && num <= 9) {
            printf("%ld is Positive Single-digit\n", num);
        } else {
            printf("%ld is Positive Multi-digit\n", num);
        }
    }
    else if (num < 0) {
        // Nested check for single-digit or multi-digit
        if (num <= -1 && num >= -9) {
            printf("%ld is Negative Single-digit\n", num);
        } else {
            printf("%ld is Negative Multi-digit\n", num);
        }
    }
    else {
        printf("Number is Zero\n");
    }

    return 0;  // End of program
}

