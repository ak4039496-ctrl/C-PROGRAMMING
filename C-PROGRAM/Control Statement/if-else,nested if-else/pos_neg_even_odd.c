/*
 * Author: Amit Gupta
 * Date: 08-07-2026
 */

#include <stdio.h>

int main() {
    int num;  // Variable to store the number

    // Ask user to enter a number
    printf("Enter a number:- ");
    scanf("%d", &num);

    // Check if number is positive
    if (num > 0) {
        // Nested check for even or odd
        if (num % 2 == 0) {
            printf("%d is Positive Even\n", num);
        } else {
            printf("%d is Positive Odd\n", num);
        }
    }
    // Check if number is negative
    else if (num < 0) {
        // Nested check for even or odd
        if (num % 2 == 0) {
            printf("%d is Negative Even\n", num);
        } else {
            printf("%d is Negative Odd\n", num);
        }
    }
    // Else condition for zero
    else {
        printf("Number is Zero\n");
    }

    return 0;  // End of program
}

