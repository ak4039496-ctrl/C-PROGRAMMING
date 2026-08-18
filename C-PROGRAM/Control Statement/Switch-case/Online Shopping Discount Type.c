// Author: Amit Gupta
// Date: 19 July 2026
#include <stdio.h>

int main() {
    int discount = 2; // 1 = Flat, 2 = Percentage, 3 = Buy One Get One

    switch(discount) {
        case 1:
            printf("Flat discount applied\n");
            break;
        case 2:
            printf("Percentage discount applied\n");
            break;
        case 3:
            printf("Buy One Get One offer applied\n");
            break;
        default:
            printf("Unknown discount type\n");
    }
    return 0;
}

