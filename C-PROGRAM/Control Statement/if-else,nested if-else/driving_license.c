/*
 * Author: Amit Gupta
 * Date: 08-07-2026
 */

#include <stdio.h>

int main() {
    int age;  // Variable to store age

    // Ask user to enter age
    printf("Enter your age:- ");
    scanf("%ld", &age);

    // Print entered age
    printf("You entered:- %ld\n", age);

    // Driving license eligibility logic using if-else
    if (age >= 18) {
        printf("You are eligible for a Driving License\n");
    }
    else {
        printf("You are not eligible for a Driving License\n");
    }

    return 0;  // End of program
}

