/*
 * Author: Amit Gupta
 * Date: 12-07-2026
 */
#include <stdio.h>

int main() {
    int num;              // Variable to store number
    int d1, d2, d3;       // Variables for digits
    int sum;              // Variable for sum of cubes

    // Ask user to enter a 3-digit number
    printf("Enter a only 3-digit number:- ");
    scanf("%d", &num);
   
    // Extract digits (no loop used)
    d1 = num / 100;          // First digit
    d2 = (num / 10) % 10;    // Second digit
    d3 = num % 10;           // Third digit

    // Calculate sum of cubes of digits
    sum = (d1 * d1 * d1) + (d2 * d2 * d2) + (d3 * d3 * d3);

    // Check if number is Armstrong
    if (sum == num) {
        printf("%d is an Armstrong number\n", num);
    }
    else {
        printf("%d is NOT an Armstrong number\n", num);
    }

    return 0;  // End of program
}

