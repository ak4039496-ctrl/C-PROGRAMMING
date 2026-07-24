/*
Author: Amit Gupta
Date: 17-07-2026
Calculate factorial of a number using do...while loop
*/
#include <stdio.h>

int main() {
    int n = 5, fact = 1, i = 1;
    do {
        fact *= i;
        i++;
    } while (i <= n);
    printf("Factorial of %d => %d\n", n, fact);
    return 0;
}

