/*
Author: Amit Gupta
Date: 17-07-2026
Reduce number to single digit sum
*/
#include <stdio.h>
int main() {
    int n = 9875, sum;
    do {
        sum = 0;
        do {
            sum += n % 10;
            n /= 10;
        } while (n != 0);
        n = sum;
    } while (n > 9);
    printf("Single digit sum => %d\n", n);
    return 0;
}
