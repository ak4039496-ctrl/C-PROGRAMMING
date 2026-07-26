/*
Author: Amit Gupta
Date: 19-07-2026
Check if a number is Armstrong
*/
#include <stdio.h>
int main() {
    int n = 153, temp = n, sum = 0;
    do {
        int digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    } while (temp != 0);

    if (sum == n)
        printf("%d is an Armstrong number\n", n);
    else
        printf("%d is not an Armstrong number\n", n);
    return 0;
}
