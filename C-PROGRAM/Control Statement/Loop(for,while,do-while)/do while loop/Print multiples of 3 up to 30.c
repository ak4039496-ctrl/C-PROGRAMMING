/*
Author: Amit Gupta
Date: 19-07-2026
Print multiples of 3 up to 30 
*/
#include <stdio.h>
int main() {
    int i = 3;
    do {
        printf("%d ", i);
        i += 3;
    } while (i <= 30);
    return 0;
}
