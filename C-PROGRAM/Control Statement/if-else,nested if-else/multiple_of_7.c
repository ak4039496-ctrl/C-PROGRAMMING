/*
 * Author: Amit Gupta
 * Date: 14-07-2026
 */
#include <stdio.h>

int main() {
    int num;  // Variable to store the number

    // Ask user to enter a number
    printf("Enter a number:- ");
    scanf("%d", &num);

    // Check if number is divisible by 7
    if (num % 7 == 0) {
        printf("%d is a multiple of 7\n", num);
    }
    else {
        printf("%d is NOT a multiple of 7\n", num);
    }

    return 0;  // End of program
}

