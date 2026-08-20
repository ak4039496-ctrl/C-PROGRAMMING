/*
Author: Amit Gupta
Date: 11-07-2026
Find sum of digits of a number
*/
#include <stdio.h>
int main() {
    int n = 456, sum = 0;
    do {
        sum += n % 10;
        n /= 10;
    } while (n != 0);
    printf("Sum of digits => %d\n", sum);
    return 0;
}

