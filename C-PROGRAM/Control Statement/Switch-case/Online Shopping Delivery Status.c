// Author: Amit Gupta
// Date: 19 July 2026
#include <stdio.h>

int main() {
    int delivery_status = 4; // 1 = Ordered, 2 = Packed, 3 = Shipped, 4 = Delivered

    switch(delivery_status) {
        case 1:
            printf("Order placed successfully\n");
            break;
        case 2:
            printf("Order packed\n");
            break;
        case 3:
            printf("Order shipped\n");
            break;
        case 4:
            printf("Order delivered\n");
            break;
        default:
            printf("Unknown delivery status\n");
    }
    return 0;
}

