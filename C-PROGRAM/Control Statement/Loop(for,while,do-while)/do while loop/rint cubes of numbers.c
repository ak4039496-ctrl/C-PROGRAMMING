/*
Author: Amit Gupta
Date: 19-07-2026
Print cubes of numbers 1 to 10
*/
#include <stdio.h>
int main() {
    int i = 1;
    do {
        printf("%d^3 => %d\n", i, i * i * i);
        i++;
    } while (i <= 10);
    return 0;
}

