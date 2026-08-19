// Author: Amit Gupta
// Date: 26 July 2026
#include <stdio.h>

int main() {
    int ticket_type = 2; // 1 = Bus, 2 = Train, 3 = Flight, 4 = Metro

    switch(ticket_type) {
        case 1:
            printf("You booked a Bus ticket\n");
            break;
        case 2:
            printf("You booked a Train ticket\n");
            break;
        case 3:
            printf("You booked a Flight ticket\n");
            break;
        case 4:
            printf("You booked a Metro ticket\n");
            break;
        default:
            printf("Invalid ticket type\n");
    }
    return 0;
}

