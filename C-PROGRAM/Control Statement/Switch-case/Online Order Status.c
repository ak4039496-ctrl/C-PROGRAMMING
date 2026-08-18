// Author: Amit Gupta
// Date: 26 July 2026
#include <stdio.h>

int main() {
    int status = 2; // 1 = Placed, 2 = Shipped, 3 = Delivered, 4 = Cancelled

    switch(status) {
        case 1:
            printf("Order placed successfully\n");
            break;
        case 2:
            printf("Order shipped\n");
            break;
        case 3:
            printf("Order delivered\n");
            break;
        case 4:
            printf("Order cancelled\n");
            break;
        default:
            printf("Unknown order status\n");
    }
    return 0;
}

