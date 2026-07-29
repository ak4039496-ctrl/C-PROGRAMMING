/*
Author: Amit Gupta
Date: 17-07-2026
Print reverse counting from N to 1
*/
#include <stdio.h>
int main() {
    int n = 12;
    do {
        printf("%d ", n);
        n--;
    } while (n >= 1);
    return 0;
}
