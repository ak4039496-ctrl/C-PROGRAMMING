#include <stdio.h>    // Standard input-output library
#include <math.h>     // Math library for pow() function

int main() {
    int base, exp;        // Declare variables for base and exponent
    double result;        // Result can be large, so use double

    // Input base number
    printf("Enter base number:- ");
    scanf("%d", &base);

    // Input exponent
    printf("Enter exponent:- ");
    scanf("%d", &exp);

    // Calculate power using pow() function
    result = pow(base, exp);

    // Display result
    printf("%d ^ %d = %.2f\n", base, exp, result);

    return 0;   // End program
}

