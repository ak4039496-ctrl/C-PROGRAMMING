#include <stdio.h>   // Standard input-output library include

int main() {
    int num;   // Declare variable

    // Input number
    printf("Enter a number:- ");
    scanf("%d", &num);

    // Using nested ternary operator with logical operators
    (num > 0) ? printf("Number is Positive\n") :
    (num < 0) ? printf("Number is Negative\n") :
                printf("Number is Zero\n");

    return 0;   // End program
}

