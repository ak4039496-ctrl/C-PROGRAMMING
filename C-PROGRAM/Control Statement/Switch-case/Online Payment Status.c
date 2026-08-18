// Author: Amit Gupta
// Date: 28 July 2026
#include <stdio.h>

int main() {
    int status = 3; // 1 = Pending, 2 = Success, 3 = Failed

    switch(status) {
        case 1:
            printf("Payment is pending\n");
            break;
        case 2:
            printf("Payment successful\n");
            break;
        case 3:
            printf("Payment failed\n");
            break;
        default:
            printf("Unknown payment status\n");
    }
    return 0;
}

