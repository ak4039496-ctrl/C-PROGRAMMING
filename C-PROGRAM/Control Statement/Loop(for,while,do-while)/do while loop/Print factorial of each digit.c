/*
Author: Amit Gupta
Date: 19-07-2026
Print factorial of each digit 
*/
#include <stdio.h>
int main() {
    int n = 234, temp = n;
    do {
        int digit = temp % 10, fact = 1, i = 1;
        do {
            fact *= i;
            i++;
        } while (i <= digit);
        printf("Factorial of %d = %d\n", digit, fact);
        temp /= 10;
    } while (temp != 0);
    return 0;
}
