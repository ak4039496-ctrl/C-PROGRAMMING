/*
 * Author: Amit Gupta
 * Date: 08-07-2026
 */
#include <stdio.h>

int main() {
    int num;

    // Input from user
    printf("Enter a number:- ");
    scanf("%d", &num);

    // If condition to check positive number
    if (num > 0) {
        printf("%d is Positive\n", num);
    }
    // Else if condition to check negative number
    else if (num < 0) {
        printf("%d is Negative\n", num);
    }
    // Else condition for zero
    else {
        printf("Number is Zero\n");
    }

    return 0;
}

