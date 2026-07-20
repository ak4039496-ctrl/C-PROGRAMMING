/*
 * Author: Amit Kumar
 * Date: 15-07-2026
 */

#include <stdio.h>

int main() {
    int year;  // Variable to store year

    // Ask user to enter a year
    printf("Enter a year:- ");
    scanf("%d", &year);

    // Check if year is divisible by 400
    if (year % 400 == 0) {
        printf("%d is a Leap Year\n", year);  // Leap year
    }
    // Check if year is divisible by 100 (but not by 400)
    else if (year % 100 == 0) {
        printf("%d is NOT a Leap Year\n", year);  // Not leap year
    }
    // Check if year is divisible by 4 (but not by 100)
    else if (year % 4 == 0) {
        printf("%d is a Leap Year\n", year);  // Leap year
    }
    // If none of the above conditions are true
    else {
        printf("%d is not a Leap Year\n", year);  // Not leap year
    }

    return 0;  // End of program
}

