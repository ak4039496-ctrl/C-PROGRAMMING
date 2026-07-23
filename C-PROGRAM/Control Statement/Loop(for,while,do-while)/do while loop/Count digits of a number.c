/*
Author: Amit Gupta
Date: 18-07-2026
Count digits of a number using do...while loop
*/
#include <stdio.h>

int main() {
    int n = 98765, count = 0;
    do {
        count++;
        n /= 10;
    } while (n != 0);
    printf("Number of digits => %d\n", count);
    return 0;
}

