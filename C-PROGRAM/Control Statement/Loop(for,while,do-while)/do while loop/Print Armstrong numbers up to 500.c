/*
Author: Amit Gupta
Date: 19-07-2026
Print Armstrong numbers up to 500 using do...while loop
*/
#include <stdio.h>
int main() {
    int num = 1;
    do {
        int temp = num, sum = 0;
        do {
            int digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        } while (temp != 0);
        if (sum == num) printf("%d ", num);
        num++;
    } while (num <= 500);
    return 0;
}
