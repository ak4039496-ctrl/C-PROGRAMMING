/*
 * Author: Amit Gupta
 * Date: 08-07-2026
 */
#include <stdio.h>

int main() {
    int marks;  // Variable to store student marks

    // Ask user to enter marks
    printf("Enter your marks (0-100):- ");
    scanf("%d", &marks);

    // Check if marks are greater than or equal to 90
    if (marks >= 90 && marks<=100) {
        printf("Grade: A\n");  // Print Grade A
    }
    // Check if marks are between 75 and 89
    else if (marks >= 75 && marks<90) {
        printf("Grade: B\n");  // Print Grade B
    }
    // Check if marks are between 50 and 74
    else if (marks >= 50 && marks<75) {
        printf("Grade: C\n");  // Print Grade C
    }
    // Check if marks are between 33 and 49
    else if (marks >= 33 && marks<50) {
        printf("Grade: D\n");  // Print Grade D
    }
    // If marks are below 33
    else {
        printf("Grade: F (Fail)\n");  // Print Fail
    }

    return 0;  // End of program
}

