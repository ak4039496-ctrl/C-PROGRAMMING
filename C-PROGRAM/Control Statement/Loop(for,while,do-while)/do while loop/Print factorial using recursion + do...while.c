/*
Author: Amit Gupta
Date: 21-07-2026
Factorial using recursion
*/
#include <stdio.h>
int fact(int n) {
    int i = 1, f = 1;
    do {
        f *= i;
        i++;
    } while (i <= n);
    return f;
}

int main() {
    int n = 6;
    printf("Factorial of %d => %d\n", n, fact(n));
    return 0;
}
