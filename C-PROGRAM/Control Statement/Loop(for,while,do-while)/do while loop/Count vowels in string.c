/*
Author: Amit Gupta
Date: 18-07-2026
Count vowels in a string using do...while loop
*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "HELLO WORLD";
    int i = 0, count = 0;
    do {
        if (str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            count++;
        i++;
    } while (i < strlen(str));
    printf("Vowel count = %d\n", count);
    return 0;
}
