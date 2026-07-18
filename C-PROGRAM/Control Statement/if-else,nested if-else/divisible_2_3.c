/*
 * Author: Amit Gupta
 * Date: 11-07-2026
 */

#include <stdio.h>

int main() {
    int num;  // Variable to store the number

    // Ask user to enter a number
    printf("Enter a number:- ");
    scanf("%d", &num);

    // Check if divisible by 2 but not by 3
    if (num % 2 == 0 && num % 3 != 0) {
        printf("%d is divisible by 2 only\n", num);
    }
    // Check if divisible by 3 but not by 2
    else if (num % 3 == 0 && num % 2 != 0) {
        printf("%d is divisible by 3 only\n", num);
    }
    // Else condition for divisible by both or neither
    else {
        printf("%d is not divisible by both 2 and 3\n", num);
    }

    return 0;  // End of program
}

