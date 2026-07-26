/*
Author: Amit Gupta
Date: 19-07-2026 
Print ASCII values of characters A to Z using do...while loop
*/
#include <stdio.h>
int main() {
    char ch = 'A';
    do {
        printf("%c => %d\n", ch, ch);
        ch++;
    } while (ch <= 'Z');
    return 0;
}

