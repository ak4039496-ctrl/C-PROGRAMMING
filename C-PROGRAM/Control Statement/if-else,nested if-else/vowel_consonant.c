/*
 * Author: Amit Gupta
 * Date: 08-07-2026
 */

#include <stdio.h>
int main() {
    char ch;  // Variable to store a character
    // Ask user to enter a character
    printf("Enter an alphabet:- ");
    scanf(" %c", &ch);  // Space before %c handles newline issues

    // Check if character is a vowel (both uppercase and lowercase)
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a Vowel\n", ch);  // Print vowel
    }
    // Else condition for consonant
    else {
        printf("%c is a Consonant\n", ch);  // Print consonant
    }

    return 0;  // End of program
}
 
