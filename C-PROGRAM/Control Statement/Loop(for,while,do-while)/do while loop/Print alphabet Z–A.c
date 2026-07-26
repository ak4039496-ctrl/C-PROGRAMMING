/*
Author: Amit Gupta
Date: 19-07-2026
Print alphabets Z to A using do...while loop
*/
#include <stdio.h>
int main() {
    char ch = 'Z';
    do {
        printf("%c ", ch);
        ch--;
    } while (ch >= 'A');
    return 0;
}

