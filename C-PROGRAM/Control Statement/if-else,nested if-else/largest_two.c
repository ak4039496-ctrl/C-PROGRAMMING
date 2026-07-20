/*
 * Author: Amit Gupta
 * Date: 15-07-2026
 */
#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter first number:- ");
    scanf("%d", &a);

    printf("Enter second number:- ");
    scanf("%d", &b);

    // If condition to check which is larger
    if (a > b) {
        printf("%d is larger\n", a);
    }
    // Else if condition to check if b is larger
    else if (b > a) {
        printf("%d is larger\n", b);
    }
    // Else condition when both are equal
    else {
        printf("Both numbers are equal\n");
    }

    return 0;
}

