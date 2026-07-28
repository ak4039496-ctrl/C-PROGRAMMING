/*
Author: Amit Gupta
Date: 19-07-2026
Print multiplication table of a given number
*/

#include <stdio.h>

int main() {
    int n = 9, i = 1;
    do {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    } while (i <= 10);
    return 0;
}
