#include <stdio.h>   

int main() {
    int num;   // Declare variable

    // Input a number
    printf("Enter a number:- ");
    scanf("%d", &num);

    // Use ternary operator to check even or odd
    (num % 2 == 0) ? 
        printf("%d is Even\n", num) : 
        printf("%d is Odd\n", num);

    // Use ternary operator to check positive or negative
    (num >= 0) ? 
        printf("%d is Positive\n", num) : 
        printf("%d is Negative\n", num);

    return 0;   // End program
}

