/*
Author: Amit Gupta
Date: 24-07-2026
Print squares of numbers 1 to 10
*/
#include <stdio.h>
int main() {
    int i = 1;
    do {
        printf("%d^2 => %d\n", i, i * i);
        i++;
    } while (i <= 10);
    return 0;
}

