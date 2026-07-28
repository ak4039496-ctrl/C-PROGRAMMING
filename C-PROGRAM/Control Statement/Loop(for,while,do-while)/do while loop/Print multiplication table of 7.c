/*
Author: Amit Gupta
Date: 18-07-2026
Print multiplication table of 7 
*/
#include <stdio.h>
int main() {
    int i = 1;
    do {
        printf("7 x %d = %d\n", i, 7 * i);
        i++;
    } while (i <= 10);
    return 0;
}

