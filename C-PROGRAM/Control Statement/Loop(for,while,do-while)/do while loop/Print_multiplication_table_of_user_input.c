/*
Author: Amit Gupta
Date: 17-07-2026
Print multiplication table of a given number 
*/

#include <stdio.h>

int main() {
    int n,i = 1;
    printf("Enter Your Num:- ");
    scanf("%d",&n);
    do {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    } while (i <= 10);
    return 0;
}

