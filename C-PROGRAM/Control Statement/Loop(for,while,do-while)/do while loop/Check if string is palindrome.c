/*
Author: Amit Gupta
Date: 13-07-2026
Check if a string is palindrome using do...while loop
*/
#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "LEVEL";
    int i = 0, j = strlen(str) - 1, flag = 1;
    do {
        if (str[i] != str[j]) {
            flag = 0;
            break;
        }
        i++;
        j--;
    } while (i < j);
    if (flag)
        printf("%s is palindrome\n", str);
    else
        printf("%s is not palindrome\n", str);
    return 0;
}
