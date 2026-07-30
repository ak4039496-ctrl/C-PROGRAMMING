/*
Author: Amit Gupta
Date: 11-07-2026
Reverse a string
*/
#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "HELLO";
    int i = strlen(str) - 1;
    do {
        printf("%c", str[i]);
        i--;
    } while (i >= 0);
    return 0;
}
