/*
 * Author: Amit Gupta
 * Date: 08-07-2026
 */
#include <stdio.h>
int main() {
    int side1, side2, side3;  // Variables to store three sides of a triangle

    // Ask user to enter three sides
    printf("Enter three sides of a triangle:- ");
    scanf("%d %d %d", &side1, &side2, &side3);

    // Check if all sides are equal
    if (side1 == side2 && side2 == side3) {
        printf("Triangle is Equilateral\n");  // All sides equal
    }
    // Check if any two sides are equal
    else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("Triangle is Isosceles\n");  // Two sides equal
    }
    // Else condition for all sides different
    else {
        printf("Triangle is Scalene\n");  // All sides different
    }

    return 0;  // End of program
}

