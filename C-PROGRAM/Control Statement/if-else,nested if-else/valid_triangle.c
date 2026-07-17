/*
 * Author: Amit Gupta
 * Date: 08-07-2026
 */

#include <stdio.h>

int main() {
    int a, b, c;  // Variables to store three angles of a triangle

    // Ask user to enter three angles
    printf("Enter three angles of a triangle:- ");
    scanf("%d %d %d", &a, &b, &c);

    // Check if sum of angles is exactly 180 and all angles are positive
    if ((a + b + c == 180) && (a > 0 && b > 0 && c > 0)) {
        printf("Triangle is VALID\n");
    }
    else {
        printf("Triangle is NOT VALID\n");
    }

    return 0;  // End of program
}

