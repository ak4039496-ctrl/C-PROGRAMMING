/*
 * Author: Amit Gupta
 * Date: 13-07-2026
 */
#include <stdio.h>

int main() {
    int num;  // Variable to store the number

    // Ask user to enter a number
    printf("Enter a number:- ");
    scanf("%d", &num);

    // Check if number is divisible by both 5 and 11
    if (num % 5 == 0 && num % 11 == 0) {
        printf("%d is divisible by both 5 and 11\n", num);
    }
    // Else condition if not divisible by both
    else {
        printf("%d is NOT divisible by both 5 and 11\n", num);
    }

    return 0;  // End of program
}

