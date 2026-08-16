// Author: Amit Gupta
// Date: 20 July 2026
#include <stdio.h>

int main() {
    int num = -5; // Step 1: Define a number
    int code;     // Step 2: Define a code for switch

    // Step 3: Map conditions into code values
    if(num > 0) {
        code = 1; // Positive
    } else if(num < 0) {
        code = 2; // Negative
    } else {
        code = 3; // Zero
    }

    // Step 4: Use switch-case on code
    switch(code) {
        case 1:
            printf("Positive number\n"); // Executes if num > 0
            break;
        case 2:
            printf("Negative number\n"); // Executes if num < 0
            break;
        case 3:
            printf("Zero\n"); // Executes if num == 0
            break;
        default:
            printf("Not a valid number\n"); // Default case
    }
    return 0;
}

