/*
Author: Amit Gupta
Date: 15-07-2026
Find product of digits of a number
*/
#include <stdio.h>
int main() {
    int n=234, product = 1;
    do {
        product *= (n % 10);
        n /= 10;
    } while (n != 0);
    printf("Product of digits => %d\n", product);
    return 0;
}
