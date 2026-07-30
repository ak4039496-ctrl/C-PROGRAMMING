/*
Author: Amit Gupta
Date: 19-07-2026
Print harmonic series up to 1/5 
*/
#include <stdio.h>

int main() {
    int i = 1;
    double sum = 0.0;
    do {
        sum += 1.0 / i;
        i++;
        printf("harmonic series => %.2f\n", sum);
    } while (i <= 5);
    return 0;
}

