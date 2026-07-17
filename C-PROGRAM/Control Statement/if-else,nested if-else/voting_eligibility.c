/*
 * Author: Amit Gupta
 * Date: 08-07-2026
 */

#include <stdio.h>

int main() {
    int age;  // Variable to store age (long type for safety)

    // Ask user to enter age
    printf("Enter your age:- ");
    scanf("%d", &age);  // Use %ld for long input

    // Check if age is 18 or above
    if (age >= 18) {
        printf("You are eligible to vote\n");
    }
    else {
        printf("You are NOT eligible to vote\n");
    }

    return 0;  // End of program
}

