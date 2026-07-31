/*
Author: Amit Gupta
Date: 13-07-2026
Print powers of a number up to exponent 5
*/
#include <stdio.h>
int main() {
    int base = 3, exp = 1, result = 1;
    do {
        result *= base;
        printf("%d^%d => %d\n", base, exp, result);
        exp++;
    } while (exp <= 5);
    return 0;
}
