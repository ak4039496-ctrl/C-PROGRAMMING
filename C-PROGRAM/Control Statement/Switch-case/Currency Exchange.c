// Author: Amit Gupta
// Date: 26 July 2026
#include <stdio.h>

int main() {
    int currency = 2; // 1 = USD, 2 = EUR, 3 = GBP

    switch(currency) {
        case 1:
            printf("Exchange rate:- 83 INR for 1 USD\n");
            break;
        case 2:
            printf("Exchange rate:- 90 INR for 1 EUR\n");
            break;
        case 3:
            printf("Exchange rate:- 105 INR for 1 GBP\n");
            break;
        default:
            printf("Unknown currency\n");
    }
    return 0;
}

