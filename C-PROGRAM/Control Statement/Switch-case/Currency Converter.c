// Author: Amit Gupta
// Date: 26 July 2026
#include <stdio.h>

int main() {
    int currency = 2; // 1 = USD, 2 = INR, 3 = EUR, 4 = GBP

    switch(currency) {
        case 1:
            printf("United States Dollar\n");
            break;
        case 2:
            printf("Indian Rupee\n");
            break;
        case 3:
            printf("Euro\n");
            break;
        case 4:
            printf("British Pound\n");
            break;
        default:
            printf("Unknown currency\n");
    }
    return 0;
}

