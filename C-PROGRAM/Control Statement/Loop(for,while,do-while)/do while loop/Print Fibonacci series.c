/*
Author: Amit Gupta
Date: 21-07-2026
Print first 10 Fibonacci numbers 
*/
#include <stdio.h>
int main() {
    int a = 0, b = 1, c, i = 1;
    do {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
        i++;
    } while (i <= 10);
    return 0;
}

