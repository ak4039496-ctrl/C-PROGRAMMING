/*
 * Author: Amit Gupta
 * Date: 15-07-2026
->   Program to check whether a number is even or odd.
 */

#include <stdio.h>

int main() {
    int num;

    // Input from user
    printf("Enter a number:- ");
    scanf("%d", &num);

    // If condition to check even number
    if (num % 2 == 0) {
        printf("%d is Even\n", num);
    }
    // Else condition for odd number
    else {
        printf("%d is Odd\n", num);
    }

    return 0;
}

