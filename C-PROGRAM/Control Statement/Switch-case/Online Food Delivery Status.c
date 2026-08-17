// Author: Amit Gupta
// Date: 28 July 2026
#include <stdio.h>

int main() {
    int status = 3; // 1 = Ordered, 2 = Preparing, 3 = Out for Delivery, 4 = Delivered

    switch(status) {
        case 1:
            printf("Food ordered successfully\n");
            break;
        case 2:
            printf("Food is being prepared\n");
            break;
        case 3:
            printf("Food is out for delivery\n");
            break;
        case 4:
            printf("Food delivered\n");
            break;
        default:
            printf("Unknown status\n");
    }
    return 0;
}

