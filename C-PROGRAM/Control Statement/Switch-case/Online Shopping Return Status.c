// Author: Amit Gupta
// Date: 27 July 2026
#include <stdio.h>

int main() {
    int payment_status = 1; // 1 = Paid, 2 = Pending, 3 = Failed

    switch(payment_status) {
        case 1:
            printf("Payment completed\n");
            break;
        case 2:
            printf("Payment pending\n");
            break;
        case 3:
            printf("Payment failed\n");
            break;
        default:
            printf("Invalid payment status\n");
    }
    return 0;
}

