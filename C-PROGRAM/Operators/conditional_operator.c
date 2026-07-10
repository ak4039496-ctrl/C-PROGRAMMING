#include <stdio.h>   // Standard input-output library include

int main() {
    int num;   // Declare variable

    // Input a number
    printf("Enter a number:- ");
    scanf("%d", &num);

    // Nested ternary operator to check positive, negative or zero
    (num > 0) ? 
        printf("%d is Positive\n", num) : 
        (num < 0) ? 
            printf("%d is Negative\n", num) : 
            printf("%d is Zero\n", num);

    return 0;   // End program
}

