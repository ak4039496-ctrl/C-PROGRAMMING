/*
Author: Amit Gupta
Date: 21-07-2026
Print factorials from 1! to 5! 
*/
#include <stdio.h>

int main() {
    int i = 1, fact = 1;
    do {
        fact *= i;
        printf("%d! => %d\n", i, fact);
        i++;
    } while (i <= 5);
    return 0;
}

