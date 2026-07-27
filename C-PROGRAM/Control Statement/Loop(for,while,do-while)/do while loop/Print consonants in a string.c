/*
Author: Amit Gupta
Date: 20-07-2026
Print consonants from a string using do...while loop
*/
#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "PROGRAMMING";
    int i = 0;
    do {
        if (!(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'))
            printf("%c ", str[i]);
        i++;
    } while (i < strlen(str));
    return 0;
}
