/*
Author: Amit Gupta
Date: 21-07-2026
Reverse digits of a number
*/
#include <stdio.h>
int main() {
    int n = 1234, rev = 0;
    do {
        rev = rev * 10 + (n % 10);
        n /= 10;
    } while (n != 0);
    printf("Reversed number => %d\n", rev);
    return 0;
}

