// Author: Amit Gupta
// Date: 25 July 2026
#include <stdio.h>

int main() {
    int payment = 3; // 1 = Cash, 2 = Card, 3 = UPI, 4 = Wallet

    switch(payment) {
        case 1:
            printf("Payment by Cash\n");
            break;
        case 2:
            printf("Payment by Card\n");
            break;
        case 3:
            printf("Payment by UPI\n");
            break;
        case 4:
            printf("Payment by Wallet\n");
            break;
        default:
            printf("Unknown payment mode\n");
    }
    return 0;
}

