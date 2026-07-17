/*
 * Author: Amit Gupta
 * Date: 08-07-2026
 */
#include <stdio.h>
int main() {
    char ch;  // Variable to store a character

    // Ask user to enter a character
    printf("Enter a character:- ");
    scanf(" %c", &ch);  // Space before %c handles newline issues

    // Check if character is uppercase (A-Z)
    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is Uppercase\n", ch);  // Print uppercase
    }
    // Check if character is lowercase (a-z)
    else if (ch >= 'a' && ch <= 'z') {
        printf("%c is Lowercase\n", ch);  // Print lowercase
    }
    // Else condition for non-alphabet characters
    else {
        printf("%c is not an alphabet character\n", ch);
    }

    return 0;  // End of program
}

