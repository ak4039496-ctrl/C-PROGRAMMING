// Author: Amit Gupta
// Date: 19 July 2026
#include <stdio.h>

int main() {
    int month = 3; // Step 1: Define numeric month

    // Step 2: Use switch-case
    switch(month) {
        case 1:
            printf("January\n");
            break;
        case 2:
            printf("February\n");
            break;
        case 3:
            printf("March\n");
            break;
        case 4:
            printf("April\n");
            break;
        default:
            printf("Other month\n"); // Default case
    }
    return 0;
}

