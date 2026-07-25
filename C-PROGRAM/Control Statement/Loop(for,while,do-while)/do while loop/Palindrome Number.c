/*Author :- Amit
date :- 17-07-26*/
#include <stdio.h>

int main() {
    int n = 121;   
    int rev = 0, digit, temp;

    temp = n; 

    if (n > 0) {
        do {
            digit = n % 10;          
            rev = rev * 10 + digit;  
            n = n / 10;
        } while(n > 0);
    }

    if(temp == rev) {
        printf("%d is a Palindrome\n", temp);
    } else {
        printf("%d is NOT a Palindrome\n", temp);
    }

    return 0;
}
