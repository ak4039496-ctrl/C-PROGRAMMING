/*
Author: Amit Gupta
Date: 17-07-2026
Calculate sum of cubes of first 10 numbers
*/
#include <stdio.h>
int main() {
    int i = 1, sum = 0;
    do {
        sum += i*i*i;
        i++;
    } while (i <= 10);
    printf("Sum of cubes => %d\n", sum);
    return 0;
}

