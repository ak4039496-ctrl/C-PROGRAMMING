/*
Author: Amit Gupta
Date: 18-07-2026
Print lowercase alphabets z to a */
#include <stdio.h>

int main() {
    char ch = 'z';
    do {
        printf("%c ", ch);
        ch--;
    } while (ch >= 'a');
    return 0;
}
