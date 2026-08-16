// Author: Amit Gupta
// Date: 20 July 2026
#include <stdio.h>

int main() {
    int ticket_type = 2; // 1 = Regular, 2 = Premium, 3 = VIP

    switch(ticket_type) {
        case 1:
            printf("Price: 200 INR\n");
            break;
        case 2:
            printf("Price: 400 INR\n");
            break;
        case 3:
            printf("Price: 800 INR\n");
            break;
        default:
            printf("Invalid ticket type\n");
    }
    return 0;
}

