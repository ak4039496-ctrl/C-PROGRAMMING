/*
Author: Amit Gupta
Date: 16-07-2026
Print multiplication table of 5 using do...while loop
*/
#include <stdio.h>

int main() {
    int i = 1;
    do {
        printf("5 x %d = %d\n", i, 5 * i);
        i++;
    } while (i <= 10);
    return 0;
}

