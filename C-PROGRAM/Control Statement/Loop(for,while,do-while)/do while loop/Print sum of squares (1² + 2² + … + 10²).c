/*
Author: Amit Gupta
Date: 15-07-2026
Calculate sum of squares of first 10 numbers
*/
#include <stdio.h>
int main() {
    int i = 1,sum = 0;
    do {
        sum +=i* i;
        i++;
    } while (i <= 10);
    printf("Sum of squares => %d\n", sum);
    return 0;
}

