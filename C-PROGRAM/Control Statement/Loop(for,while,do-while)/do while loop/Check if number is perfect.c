/*
Author: Amit Gupta
Date: 19-07-2026
Check if a number is perfect using do...while loop
*/
#include <stdio.h>
int main() {
    int n = 28, sum = 0, i = 1;
    do {
        if (n % i == 0)
            sum += i; 
        i++;
    } while (i < n);
    if (sum == n)
        printf("%d is a perfect number\n", n);
    else
        printf("%d is not a perfect number\n", n);
    return 0;
}
