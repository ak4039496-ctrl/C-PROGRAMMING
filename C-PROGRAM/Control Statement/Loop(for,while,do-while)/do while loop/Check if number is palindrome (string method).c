/*
Author:- Amit Gupta
Date: 19-07-2026
Check if number is palindrome by converting to string using do...while loop
*/
#include <stdio.h>
#include <string.h>

int main() {
    char num[] = "12321";
    int i = 0, j = strlen(num) - 1, flag = 1;
    do {
        if (num[i] != num[j]) {
            flag = 0;
            break;
        }
        i++;
        j--;
    } while (i < j);
    if (flag)
        printf("%s is palindrome\n", num);
    else
        printf("%s is not palindrome\n", num);
    return 0;
}
