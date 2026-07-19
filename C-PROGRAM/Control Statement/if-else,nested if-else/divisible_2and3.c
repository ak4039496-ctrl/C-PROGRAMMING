/*
 * Author: Amit Gupta
 * Date: 12-07-2026
 */

#include <stdio.h>

int main() {
    int num;  // Variable to store the number

    // Ask user to enter a number
    printf("Enter a number:- ");
    scanf("%ld", &num);

    // Print the entered number
    printf("You entered:- %d\n", num);

    // Check divisibility using if-else
    if (num % 2 == 0 && num % 3 == 0) {
        printf("%d is divisible by BOTH 2 and 3\n", num);
    }
    else if (num % 2 == 0) {
        printf("%d is divisible by 2 only\n", num);
    }
    else if (num % 3 == 0) {
        printf("%d is divisible by 3 only\n", num);
    }
    else {
        printf("%d is not divisible by 2 or 3\n", num);
    }
    return 0;  // End of program
}

