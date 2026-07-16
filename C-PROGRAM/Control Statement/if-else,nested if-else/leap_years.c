/*
 * Author: Amit Gupta
 * Date: 14-07-2026
 */

#include <stdio.h>

int main() {
    int year;  // Variable to store year

    // Ask user to enter a year
    printf("Enter a year:- ");
    scanf("%d", &year);

    // Print the entered year
    printf("You entered:- %d\n", year);

    // Leap year logic using if-else
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%ld is a Leap Year\n", year);
    }
    else {
        printf("%ld is NOT a Leap Year\n", year);
    }

    return 0;  // End of program
}

