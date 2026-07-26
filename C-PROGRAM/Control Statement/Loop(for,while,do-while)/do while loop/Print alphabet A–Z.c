/*
Author: Amit Gupta
Date: 19-07-2026
Print alphabets A to Z using do...while loop
*/
#include <stdio.h>
int main() {
    char ch = 'A';
    do {
        printf("%c ", ch);
        ch++;
    } while (ch <= 'Z');
    return 0;
}

