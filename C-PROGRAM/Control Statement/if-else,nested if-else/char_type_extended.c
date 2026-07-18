/*
 * Author: Amit Gupta
 * Date: 14-07-2026
 */

#include <stdio.h>

int main() {
    char ch;  // Variable to store a character

    // Ask user to enter a character
    printf("Enter a character:- ");
    scanf(" %c", &ch);  // Space before %c handles newline issues

    // Print the entered character
    printf("You entered:- %c\n", ch);

    // Check if character is uppercase alphabet
    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is Uppercase Alphabet\n", ch);
    }
    // Check if character is lowercase alphabet
    else if (ch >= 'a' && ch <= 'z') {
        printf("%c is Lowercase Alphabet\n", ch);
    }
    // Check if character is digit
    else if (ch >= '0' && ch <= '9') {
        printf("%c is a Digit\n", ch);
    }
    // Else condition for special characters
    else {
        printf("%c is a Special Character\n", ch);
    }

    return 0;  // End of program
}

