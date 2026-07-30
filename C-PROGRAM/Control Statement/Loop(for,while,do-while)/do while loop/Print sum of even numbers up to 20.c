/*
Author: Amit Gupta
Date: 14-07-2026
Calculate sum of even numbers up to 20
*/
#include <stdio.h>
int main() {
    int i =2, sum = 0;
    do {
        sum += i;
        i += 2;
    } while (i <= 20);
    printf("Sum of even numbers => %d\n", sum);
    return 0;
}

