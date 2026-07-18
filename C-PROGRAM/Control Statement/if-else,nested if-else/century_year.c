/*
 * Author: Amit KUMAR
 * Date: 11-07-2026
 */

#include <stdio.h>

int main() {
    int year;  // Variable to store year

    // Ask user to enter a year
    printf("Enter a year:- ");
    scanf("%d", &year);

    // Check if year is divisible by 100
    if (year % 100 == 0) {
        printf("%d is a Century Year\n", year);  // Example: 1900, 2000
    }
    else {
        printf("%d is NOT a Century Year\n", year);  // Example: 1999, 2021
    }

    return 0;  // End of program
}

