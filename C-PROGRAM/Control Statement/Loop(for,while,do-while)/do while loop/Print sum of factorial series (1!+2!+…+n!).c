/*
Author: Amit Gupta
Date: 15-07-2026
Calculate sum of factorial series
*/
#include <stdio.h>
int main() {
    int n = 5, i = 1, sum = 0;
    do {
        int fact = 1, j = 1;
        do {
            fact *= j;
            j++;
        } while (j <= i);
        sum += fact;
        i++;
    } while (i <= n);
    printf("Sum of factorial series => %d\n", sum);
    return 0;
}
