/*
Author: Amit Gupta
Date: 11-07-2026
Print powers of 2 up to 2^10 
*/
#include <stdio.h>
int main() {
    int i = 1, value = 1;
    do {
        printf("2^%d => %d\n", i, value);
        value *= 2;
        i++;
    } while (i <= 10);
    return 0;
}

