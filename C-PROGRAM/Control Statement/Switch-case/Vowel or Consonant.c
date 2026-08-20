// Author: Amit Gupta
// Date: 27 July 2026
#include <stdio.h>

int main() {
    char ch = 'e'; // test character

    switch(ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("%c is a vowel\n", ch);
            break;
        default:
            printf("%c is a consonant\n", ch);
    }
    return 0;
}

