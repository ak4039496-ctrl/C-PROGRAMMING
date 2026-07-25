/*Autho :- Amit
date :- 22-07-26*/
#include <stdio.h>
int main() {
    int num, original, rev = 0, digit;

    printf("Enter a number:-");
    scanf("%d", &num);

    original = num;

    // Reverse the number (with a check to support num = 0 safely)
    if (num > 0) {
        do {
            digit = num % 10;
            rev = rev * 10 + digit;
            num = num / 10;
        } while(num > 0);
    }

    // Compare reversed with original
    if(original == rev)
        printf("%d is a Palindrome number\n", original);
    else
        printf("%d is NOT a Palindrome number\n", original);

    return 0;
}
