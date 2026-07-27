/*
Author: Amit Gupta
Date: 19-07-2026
Print even numbers from 2 to 20 
*/
#include <stdio.h>
int main() {
    int i = 2;
    do {
        printf("%d\n", i);
        i += 2;
    } while (i <= 20);
    return 0;
}

