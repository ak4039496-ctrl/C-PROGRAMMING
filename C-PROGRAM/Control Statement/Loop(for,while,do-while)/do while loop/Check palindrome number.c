/*
Author: Amit Gupta
Date: 11-07-2026
Description: Check if a number is palindrome using do...while loop
*/

#include <stdio.h>

int main() {
    int n = 121, temp = n, rev = 0;
    do {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    } while (temp != 0);

    if (rev == n)
        printf("%d is a palindrome\n", n);
    else
        printf("%d is not a palindrome\n", n);
    return 0;
}

