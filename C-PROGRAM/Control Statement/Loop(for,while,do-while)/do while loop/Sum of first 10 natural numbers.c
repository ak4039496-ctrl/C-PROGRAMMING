/*
Author: Amit Gupta
Date: 19-07-2026
Calculate sum of first 10 natural numbers using do...while loop
*/
#include <stdio.h>
int main() {
    int i = 1, sum = 0;
    do {
        sum += i;
        i++;
    } while (i <= 10);
    printf("Sum => %d\n", sum);
    return 0;
}

