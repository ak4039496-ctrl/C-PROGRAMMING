/*
Author: Amit Gupta
Date: 17-07-2026
Print numbers in steps of 5
*/
#include <stdio.h>
int main() {
    int i = 5;
    do {
        printf("%d ", i);
        i += 5;
    } while (i <= 50);
    return 0;
}
