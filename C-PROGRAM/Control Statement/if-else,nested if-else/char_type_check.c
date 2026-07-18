/*
 * Author: Amit Gupta
 * Date: 13-07-2026
 */

#include <stdio.h>

int main() {
    char ch;  // Variable to store a character

    // Ask user to enter a character
    printf("Enter a character:- ");
    scanf(" %c", &ch);  // Space before %c handles newline issues

    // Check if character is an alphabet (A-Z or a-z)
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("%c is an Alphabet\n", ch);
    }
    // Else if condition to check digit (0-9)
    else if (ch >= '0' && ch <= '9') {
        printf("%c is a Digit\n", ch);
    }
    // Else condition for special characters
    else {
        printf("%c is a Special Character\n", ch);
    }

    return 0;  // End of program
}

