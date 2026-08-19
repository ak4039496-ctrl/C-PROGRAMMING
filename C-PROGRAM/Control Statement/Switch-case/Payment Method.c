// Author: Amit Gupta
// Date: 23 July 2026
#include <stdio.h>

int main() {
    int payment = 3; // 1 = Cash, 2 = Card, 3 = UPI, 4 = NetBanking

    switch(payment) {
        case 1:
            printf("You paid with Cash\n");
            break;
        case 2:
            printf("You paid with Card\n");
            break;
        case 3:
            printf("You paid using UPI\n");
            break;
        case 4:
            printf("You paid via NetBanking\n");
            break;
        default:
            printf("Invalid payment method\n");
    }
    return 0;
}

